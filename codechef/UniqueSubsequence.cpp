#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;string str;cin>>n>>str;
        int cnt=0,mx=0;
        for(int i=0;i<str.size()-1;i++){
            if(str[i]!=str[i+1]){
                cnt++;
            }
        }
        cout<<cnt+1<<"\n";
    }
    return 0;
}