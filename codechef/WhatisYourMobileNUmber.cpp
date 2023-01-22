#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;string str;while(t--){
        cin>>str;
        int k=0,cnt=0;
        for(int i=0;i<str.size();i++){
            if(str[i]!='0'){
                k++;
            }

            if(k>=1 && str[i]>='0' && str[i]<='9'){
                cnt++;
            }
        }
        if(cnt==10){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}