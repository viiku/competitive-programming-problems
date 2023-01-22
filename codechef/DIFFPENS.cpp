#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;string str;cin>>t;while(t--){
        cin>>n>>str;
        int cnt=0;
        for(int i=0;i<str.size()-1;i++){
            if(str[i]==str[i+1]){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}