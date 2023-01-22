#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        int cnt=0,cnt1=0;
        vector<int>v;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                cnt1++;
                v.emplace_back(i+1);
            }
        }
        v.resize(cnt1);
        for(int i=0;i<cnt1-1;i++){
            cnt+=(v[i+1]-v[i])-1;
        }
        cout<<cnt<<"\n";        
    }
    return 0;
}