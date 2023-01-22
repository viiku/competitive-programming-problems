#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        int n,k;cin>>n>>k;
        string str;cin>>str;
        for(int i=0;i<str.size();i++){
            str[i]+=k;
            if(str[i]>='A' && str[i]<='Z'){
                cout<<str[i];
            }else if(str[i]>'Z' && str[i]<'a'){
                cout<<str[i]-'Z'+'A';
            }else if(str[i]>='a' && str[i]<='z'){
                cout<<str[i];
            }else if()           
        }
    }
    return 0;
}