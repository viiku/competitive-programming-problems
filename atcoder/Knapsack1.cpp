#include<bits/stdc++.h>
using namespace std;
int knapsack(int a[],int b[],int n,int w){
    if(n==1 || w==1){
        if(n==1 || w==1){
            if(a[1]>w){
                return 0;
            }
        }
    }
    if(a[n-1]>w){
        return knapsack(a,b,n-1,w);
    }else{
        return b[n-1]+max(knapsack(a,b,n-1,w-a[n-1]),knapsack(a,b,n-1,w));
    }
}
int main(){
    int n,w,w1,w2;cin>>n>>w;
    int a[n],b[n];
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
    }
    cout<<knapsack(a,b,n,w);
}