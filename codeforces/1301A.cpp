#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;while(3*n--){
    string s,s1,s2;cin>>s>>s1>>s2;
    bool ok=true;
    for(int i=0;i<s2.size();i++){
        if((s2[i]==s[i] && s2[i]==s1[i]) || (s2[i]==s[i] && s2[i]!=s1[i]) || (s2[i]!=s[i] && s2[i]==s1[i])){
            ok;
        }else{
            ok=false;
        }
    }
    if(!ok){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
    }
    return 0;
}