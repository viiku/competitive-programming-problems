#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        string str;cin>>n>>str;
        int mn;
        vector<char>v={'C','G','I','O','S','Y','a','g','k','m','q'};
        for(int i=0;i<str.size();i++){
            mn=1e5;char ch;
            for(int j=0;j<v.size();i++){
                if(str[i]==v[j]){
                    cout<<str[i];
                    break;
                }else
                    if((str[i]-v[j])<=mn){
                        mn=str[i]-v[j];
                    }
                }
            }
        }
    }