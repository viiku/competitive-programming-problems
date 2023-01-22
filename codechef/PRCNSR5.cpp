#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int n=str.size(),p=0;
    p=str[n-1];
    if(p%2==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}