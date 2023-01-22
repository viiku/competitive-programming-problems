#include<bits/stdc++.h>
using namespace std;
int segtree[32];
int lazy[32]={0};
void buildtree(int a[],int node,int left,int right){
    if(left==right){
        segtree[node]=a[left];
    }else{
        int mid=left+(right-left)/2;
        buildtree(a,2*node+1,left,mid);
        buildtree(a,2*node+2,mid+1,right);
        segtree[node]=segtree[2*node+1]+segtree[2*node+2];
    }
}

//Updating Range
void updateRange(int node,int left,int right,int l,int r,int new_val){
    if(lazy[node] != 0){ 
        // This node needs to be updated
        segtree[node] += (right - left + 1) * lazy[node];    // Update it
        if(left != right){
            lazy[node*2+1]+=lazy[node];                  // Mark child as lazy
            lazy[node*2+2]+=lazy[node];                // Mark child as lazy
        }
        lazy[node]=0;                                  // Reset it
    }
    if(left>right || left>r || right<l)              // Current segment is not within range [l, r]
        return;
    if(left>=l and right<=r){
        // Segment is fully within range
        segtree[node]+=(right-left+1)*new_val;
        if(left!=right){
            // Not leaf node
            lazy[node*2+1]+=new_val;
            lazy[node*2+2]+=new_val;
        }
        return;
    }
    int mid=(left+right)/2;
    updateRange(node*2+1,left,mid,l,r,new_val);        // Updating left child
    updateRange(node*2+2,mid+1,right, l,r,new_val);   // Updating right child
    segtree[node]=segtree[node*2+1]+segtree[node*2+2];        // Updating root with max new_value 
}

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    buildtree(a,0,0,n-1);
    updateRange(0,0,n-1,1,2,5);
    cout<<minquery(0,0,n-1,0,n-1);
}