#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0,q=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<str.size()-1;i++){
        if(str[i]=='S' && str[i+1]=='F'){
            p++;
        }else if(str[i]=='F' && str[i+1]=='S'){
            q++;
        }
    }
    if(p>q){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
}