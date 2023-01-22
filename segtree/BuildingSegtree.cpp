#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

//Segtree of size 4*n should be created for n size array
ll segtree[400005]; 
void buildtree(int a[],int node,int left,int right) {
    if (left==right){
        segtree[node]=a[left];
    }else{
        int mid=left+(right-left)/2;
        buildtree(a,2*node+1,left,mid);
        buildtree(a,2*node+2,mid+1,right);
        segtree[node]=segtree[2*node+1]+segtree[2*node+2];
    }
}

//Update Array Values
void update(int node,int left,int right,int pos,int new_val){
    if(left==right){
        segtree[node]=new_val;
    }else{
        int mid=left+(right-left)/2;
        if(pos<=mid){
            update(2*node+1,left,mid,pos,new_val);
        }else{
            update(2*node+2,mid+1,right,pos,new_val);
        }
        segtree[node]=segtree[2*node+1]+segtree[2*node+2];
    }
}

//Sum in given range
ll sum(int node,int left,int right,int l,int r){
    if(left>=r || l>=right){
        return 0;
    }
    if(l>=left && r<=right){
        return segtree[node];
    }
    int mid=(left+right)/2;
    return sum(2*node+1,left,mid,l,r)+sum(2*node+2,mid+1,right,l,r);
}
int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    buildtree(a,0,0,n-1);
    // for(int i=0;i<85;i++){
    //     cout<<segtree[i]<<" ";
    // }
    while(q--){
        int x,k,u,l,r;
        cin>>x;
        if(x==1){
            cin>>k>>u;
            // k--;
            update(0,0,n-1,k,u);
        }else if(x==2){
            cin>>l>>r;
            r--;
            cout<<sum(0,0,n-1,l,r)<<"\n";
        }
    }
}
