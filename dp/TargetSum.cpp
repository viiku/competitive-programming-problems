#include<bits/stdc++.h>
using namespace std;
bool targetsum(int a[],int n,int target){
    if(n==0 && target!=0){
        return false;
    }else if(a[n-1]>target){
        return targetsum(a,n-1,target);
    }else if(a[n-1]<target){
        return targetsum(a,n-1,target-a[n-1]) || targetsum(a,n-1,target);
    }
    return 
}
int main(){
    int n,target;cin>>n>>target;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(targetsum(a,n,target)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}