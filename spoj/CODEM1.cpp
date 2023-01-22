#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        int cnt=0,cnt1=0,cnt2=0;
        for(int i=0;i<(int)str.size();i++){
            if(str[i]=='+'){
                cnt++;
            }else if(str[i]=='-'){
                cnt1++;
            }else if(str[i]=='$'){
                cnt2++;
            }
        }
        if(cnt>0 && cnt1==0 || cnt==0 && cnt1>0 || cnt2>0 && cnt==0 && cnt1=0){
            cout<<"possible\n";
        }else{
            cout<<"trivial\n";
        }
    }
}