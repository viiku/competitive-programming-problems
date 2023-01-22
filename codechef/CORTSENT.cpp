#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k;cin>>t;while(t--){
        cin>>k;
        vector<string>v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        bool ok=true;
        for(int i=0;i<k;i++){
            int cnt=0,cnt1=0;
            for(int j=0;j<(int)v[i].size();j++){
                if(v[i][j]>='a' && v[i][j]<='m'){
                    cnt++;
                }else if(v[i][j]>='N' && v[i][j]<='Z'){
                    cnt1++;
                }
            }
            if(cnt==(int)v[i].size() || cnt1==(int)v[i].size()){
                continue;
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
}