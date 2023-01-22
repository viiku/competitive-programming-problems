#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
bool CountNum(ll l){
    if(l%10==2 || l%10==3 || l%10==9)
        return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll p=0;
        for(int i=l;i<=r;i++){
            if(CountNum(i)){
                p++;
            }
        }
        cout<<p<<"\n";
    }
    return 0;
}