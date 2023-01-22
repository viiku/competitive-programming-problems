#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,m;cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int sum=0,mx=0;
    for(int i=0;i<m;i++){
        if(i==0){
            sum=a[0]-1;
            mx=a[0];
        }else{
            if(a[i]>=mx){
                sum+=a[i]-mx;
                mx=a[i];
            }else{
                sum+=(a[i]-1)+(n-a[i]);
                mx=a[i];
            }
        }
    }
    cout<<sum<<"\n";
}