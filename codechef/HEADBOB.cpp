#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;string str;cin>>t;while(t--){
        cin>>n>>str;
        int cnt=0,cnt1=0,cnt2=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='Y'){
                cnt++;
            }else if(str[i]=='N'){
                cnt1++;
            }else if(str[i]=='I'){
                cnt2++;
            }
        }
        if(cnt2!=0){
            cout<<"INDIAN\n";
        }else if(cnt!=0){
            cout<<"NOT INDIAN\n";
        }else{
            cout<<"NOT SURE\n";
        }
    }
    return 0;
}