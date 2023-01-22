#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;
    if(t==0){
        cin>>str;
        cout<<"Invalid Test\n";
    }else{
        while(t--){
            cin.ignore();
            cin>>str;
            int cnt=0,cnt1=0;
            for(int i=0;i<str.size();i++){
                if(str[i]>='A' && str[i]<='Z'){
                    cnt++;
                }else if(str[i]>='a' && str[i]<='z'){
                    cnt1++;
                }
            }
            if(cnt>0 || cnt1>0){
                cout<<min(cnt,cnt1)<<"\n";
            }else{
                cout<<"Invalid Input\n";
            }
        }
    }
    return 0;
}