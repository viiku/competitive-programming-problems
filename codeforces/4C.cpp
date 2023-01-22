#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    int n;string str;cin>>n;while(n--){
        cin>>str;
        mp[str]++;
        if(mp[str]==1){
            cout<<"OK"<<"\n";
        }else if(mp[str]>1){
            cout<<str<<mp[str]-1<<"\n";
        }
    }
    return 0;
}