#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    if(str.size()==1){
        cout<<"YES"<<"\n";
    }else{
        int j=str.size()-1,p=0;
        for(int i=0;i<str.size();i++){
            if(str[i]!=str[j] && i<=j){
                p++;
            }
            j--;
        }
        if(str.size()%2==0){
            if(p==1){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }else if(str.size()%2!=0){
            if(p==1 || p==0){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}