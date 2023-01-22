#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,b,w,bc,wc,z;cin>>t;while(t--){
        cin>>b>>w>>bc>>wc>>z;
        cout<<min({b*bc+w*z,w*wc+b*z,b*bc+w*wc})<<"\n";
    }
    return 0;
}