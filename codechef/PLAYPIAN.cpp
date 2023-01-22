#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        int p=0;
        for(int i=0;i<str.size()-1;i+=2){
            if(str[i]==str[i+1]){
                p++;
            }
        }
        if(p!=0){
            cout<<"no\n";
        }else{
            cout<<"yes\n";
        }
    }
    return 0;
}