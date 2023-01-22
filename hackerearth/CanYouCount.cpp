#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
bool isvowel(char ch){
    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}
int main(){
    int t;string str;cin>>t;while(t--){
        cin.ignore();
        cin>>str;
        ll cnt=0,sum=1;
        map<char,int>mp;
        for(int i=0;i<str.size();i++){
            if(isvowel(str[i])){
                cnt+=1;
                mp[str[i]]++;
            }else if(str[i]=='_'){
                ll k=mp.size();
                sum*=k;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}