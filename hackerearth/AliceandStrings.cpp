#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    string str,str1;cin>>str>>str1;
    int p=0,n=str.size();
    for(int i=0;i<n;i++){
        if(str1[i]-str[i]<0){
            p++;
        }
    }
    if(p!=0){
        cout<<"NO"<<"\n";
    }else{
        cout<<"YES"<<"\n";
    }
    return 0;
}