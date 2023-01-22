#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        ll sum=0;
        for(int i=1;i<=n;i++){
            if((i%2==0 && i%3==0) || (i%4==0)){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}