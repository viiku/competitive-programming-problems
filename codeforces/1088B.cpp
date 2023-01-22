#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll sum=a[0],i=0; //TODO
    if(n<k){
        while(i<k){
            if(i<n){
                cout<<a[i]<<"\n";
                i++;
                sum+=a[i];
                a[i]-=sum;
            }else{
                cout<<"0"<<"\n";
            }
            i++;
        }
    }else if(n>=k){
        while(i<k){
            cout<<a[i]<<"\n";
            sum+=a[i+1];
            i++;
            a[i]-=sum;
        }
    }
    return 0;
}