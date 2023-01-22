/*17-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
bool checksingleletter(string str,string str1){
    int cnt=0,k=str.size();
    for(int i=0;i<k;i++){
        if(str[i]!=str1[i]){
            cnt++;
        }
    }
    if(cnt>1){
        return false;
    }
    return true;
}
int main(){
    IOS;
    int t,n,m;cin>>t;while(t--){
        cin>>n>>m;
        // int m=abs(s-n);
        vector<string>v1(n),v2(m);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        vector<int>v;
        for(int j=0;j<m;j++){
            bool ok=false;
            for(int i=0;i<n;i++){
                if(v2[j]==v1[i]){
                    ok=true;
                    break;
                }else if(checksingleletter(v2[j],v1[i]) && v2[j].size()==v1[i].size()){
                    ok=true;
                    break;                    
                }
            }
            if(ok){
                v.emplace_back(1);
            }else{
                v.emplace_back(0);
            }
        }
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}