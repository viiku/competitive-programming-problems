#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1,s2,s3;cin>>s>>s1>>s2;
    s3=s+s1;
    sort(s3.begin(),s3.end());
    sort(s2.begin(),s2.end());
    if(s3.size()!=s2.size()){
        cout<<"NO\n";
        return 0;
    }else{
        for(int i=0;i<s3.size();i++){
            if(s3[i]!=s2[i]){
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
}