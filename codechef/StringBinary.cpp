#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,cnt=0;cin>>n;
        string str;cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[i]==1){
                cnt++;
                
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}