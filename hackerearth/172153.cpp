#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;string str;cin>>t;while(t--){
        cin>>n;
        cin.ignore();
        set<string>s;
        while(n>0){
            cin>>str;
            s.insert(str);
            n--;
        }
        cout<<s.size()<<"\n";
    }
    return 0;
}