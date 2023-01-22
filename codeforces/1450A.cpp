#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;string str;cin>>t;while(t--){
        cin>>n>>str;
        sort(str.begin(),str.end());
        cout<<str<<"\n";
    }
    return 0;
}