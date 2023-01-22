#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string>s;
    int n;string str;cin>>n;while(n--){
        cin>>str;
        s.insert(str);
    }
    for(auto it:s){
        cout<<it<<"\n";
    }
    return 0;
}