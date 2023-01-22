#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int t,n;cin>>t;while(t--){
        cin>>n;
        if(s.find(n)!=s.end()){
            cout<<"Yes ";
        }else{
            cout<<"No ";
            s.insert(n);
        }
        cout<<s.size()<<"\n";
    }
    return 0;
}