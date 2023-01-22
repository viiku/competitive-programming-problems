#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    string str;cin>>str;
    int cnt=0,mx=0;
    if(str.size()==1){
        cout<<1<<"\n";
    }else{
        int n=str.size()-1;
        for(int i=0;i<n;i++){
            if(str[i]==str[i+1]){
                cnt+=2;
                mx=max(mx,cnt);
                cnt-=1;
            }else if(str[i]!=str[i+1]){
                cnt+=1;
                mx=max(mx,cnt);
                cnt=0;
            }
        }
        cout<<mx<<"\n";
    }
}