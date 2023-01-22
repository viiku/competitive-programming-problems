#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;string str,ptr;cin>>t;while(t--){
        cin>>n>>str>>ptr;
/*        int cnt1=0,cnt2=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                cnt1++;
            }
        }
        for(int i=0;i<ptr.size();i++){
            if(ptr[i]=='1'){
                cnt2++;
            }
        }
        if(cnt1==cnt2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }*/
        sort(str.begin(),str.end());
        sort(ptr.begin(),ptr.end());
        if(str==ptr)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}