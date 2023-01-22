#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    set<int>s;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    for(int i=1;i<=n;i++){
        if(s.count(i)){
            continue;
        }else{
            cout<<i<<"\n";
            return 0;
        }
    }
}