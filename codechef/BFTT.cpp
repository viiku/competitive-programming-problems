#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
void solve_test(ll n){
    string str=to_string(n);
    reverse(str.begin(),str.end());
    int q=0;
    for(int i=0;i<str.size();i++){
        if(str[i]!=3 && q<3){
            str[i]=3;
            q++;
        }else if(str[i]==3 && q<3){
            q++;
        }
    }
    reverse(str.begin(),str.end());
    cout<<str<<"\n";
    
}
int main(){
    int t;cin>>t;while(t--){
        ll n;cin>>n;
        solve_test(n);
    }
    return 0;
}