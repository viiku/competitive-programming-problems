#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
int main(){
    int t,n,k;cin>>t;string str;while(t--){
        cin>>n>>k;
        int a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        while(n--){
            cin>>str;
            ll cnt=0;
            for(int i=0;i<(int)str.size();i++){
                if(str[i]=='1'){
                    cnt+=a[i];
                }
            }
            cout<<cnt<<endl;
        }
    }
}