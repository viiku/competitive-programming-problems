// Date:14-04-2021
// Time:22:41:28
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define testcases ll t; cin>>t; while(t--);
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    testcases{
        int n;cin>>n;
        char str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(str[i]=='1'){
                for(int j=i+1;j<n;j++){
                    if(str[j]=='1'){
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
}