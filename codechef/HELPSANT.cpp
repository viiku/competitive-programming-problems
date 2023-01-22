#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n;
    set<int>s;
    for(int i=1;i<=n;i++){
        cin>>k;
        s.insert(k);
    }
    for(auto it:s){
        cout<<it<<" ";
    }
    return 0;
}