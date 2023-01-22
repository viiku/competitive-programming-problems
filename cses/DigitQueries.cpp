#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll q,k;
int main(){
    string str;
    for(ll i=1;i<=q;i++){
        str.push_back(i+'0');
    }
    cin>>q;while(q--){
        cin>>k;
        cout<<str[k-1];
    }
}