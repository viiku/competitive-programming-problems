#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;while(n--){
        string str,str1;cin>>str>>str1;
        int id=str.find(str1);
        if(id==-1){
            cout<<0<<"\n";
        }else{
            cout<<1<<"\n";
        }
    }
    return 0;
}