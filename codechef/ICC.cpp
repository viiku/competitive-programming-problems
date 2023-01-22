#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n;string str;cin>>t;while(t--){
        cin>>str;
        n=(int)str.size();
        int mx=0,cnt=0;
        char ch;
        int i=0,j=0;
        while(j<n){
            if(str[i]!=str[j]){
                cnt=0;
                i=j;
                mx=max(mx,cnt);
            }else{
                cnt++;
                if(mx<max(mx,cnt)){
                    ch=str[i];
                    mx=max(mx,cnt);
                }
                j++;
            }
        }
       cout<<mx<<" "<<ch<<endl;
    }
}