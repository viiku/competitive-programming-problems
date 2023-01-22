#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n,k;cin>>n;while(n--){
        cin>>k;
        int a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
    }
    cout<<s.size()<<"\n";
    return 0;
}