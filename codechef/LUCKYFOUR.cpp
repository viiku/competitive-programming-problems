#include<bits/stdc++.h>
using namespace std;
using  ll=long long int;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,count=0;
        cin>>n;
        string str;
        str=to_string(n);
//        cout<<str;
        for(int i=0;i<str.size();i++){
            if(str[i]=='4'){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}