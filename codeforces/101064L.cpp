#include<bits/stdc++.h>
using namespace std;
int knapsack(int v[],int v1[],int n,int s){
    if(n==1 && v[0]>s){
        return 0;
    }
    if(s==0){
        return 0;
    }
    if(v[n-1]>s){
        return knapsack(v,v1,s,n-1);
    }else{
        return max(knapsack(v,v1,s-v[n-1],n-1),knapsack(v,v1,s,n-1));
    }

}
int main(){
    int n,wi,s,ci;cin>>n>>s;
    int v[n],v1[n];
    for(int i=0;i<n;i++){
        cin>>wi>>ci;
        v[i]=wi;v1[i]=ci;
    }
    cout<<knapsack(v,v1,n,s);
}