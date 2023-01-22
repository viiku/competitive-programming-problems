#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    if(str[0]=='@' || str[(int)str.size()-1]=='@'){
        cout<<"No solution\n";
    }else{
        int j=0,k=-5;
        bool ok=true;
        vector<char>v;
        for(int i=0;i<(int)str.size();i++){
            if(str[i]=='@'){
                j=i-1;
                v.emplace_back(str[j]);
                v.emplace_back(str[i]);
                if(j==k){
                    ok=false;
                    break;
                }
                k=i+1;
                v.emplace_back(str[k]);
                v.emplace_back(',');
                // cout<<j<<" "<<k<<" ";
            }else{
                continue;
            }
        }
         if(!ok){
            cout<<"No solution\n";
        }else{
            v.resize(v.size()-1);
            for(char c:v){
                cout<<c;
            }
        }
    }
}