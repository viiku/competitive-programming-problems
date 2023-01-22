#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;string str,str1;while(2*t--){
        cin>>str>>str1;
        int n=str.size();
        int m=str1.size();
        sort(str.begin(),str.end());
        sort(str1.begin(),str1.end());
        if(n>=m){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(i<=m-1){
                    if(str[i]==str1[i]){
                        cnt++;
                    }
                }
            }
            if(cnt==0){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }else{
            int cnt=0;
            for(int i=0;i<m;i++){
                if(i<=n-1){
                    if(str[i]==str1[i]){
                        cnt++;
                    }
                }
            }
            if(cnt==0){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }
    }
    return 0;
}