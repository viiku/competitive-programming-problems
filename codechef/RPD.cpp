#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int maximumsum(int k){
    int sum=0;
    while(k>0){
        sum+=k%10;
        k/=10;
    }
    return sum;
}
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mx=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    int p=a[i]*a[j];
                    mx=max(mx,maximumsum(p));
                }
            }
        }
        cout<<mx<<endl;
    }
}