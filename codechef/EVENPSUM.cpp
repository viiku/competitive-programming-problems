#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,a,b;cin>>t;while(t--){
        cin>>a>>b;
        ll even,odd,even1,odd1;
        even=a/2;odd=a-even;
        even1=b/2;odd1=b-even1;
        cout<<even*even1+odd*odd1<<"\n";
    }
    return 0;
}