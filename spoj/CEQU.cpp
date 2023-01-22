#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i=1,a,b,c;cin>>t;while(t--){
        cin>>a>>b>>c;
        int k=__gcd(a,b);
        if(c%k==0){
            cout<<"Case "<<i<<": Yes\n";
        }else{
            cout<<"Case "<<i<<": No\n";
        }
        i++;
    }
    return 0;
}