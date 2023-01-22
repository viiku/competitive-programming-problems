#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        vector<int>v;
        string str,str1;cin>>str>>str1;
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]!=str1[i]){
                if(i%2==0){
                    v.emplace_back(i+1);
                }else{
                    v.emplace_back(i+1);
                }
            }
        }
        if(v.size()==0){
            cout<<0<<"\n";
        }else{
            for(int i=0;i<v.size();i++){
                if(v[i]-)
            }
        }
    }
}