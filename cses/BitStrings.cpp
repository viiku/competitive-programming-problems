#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll mod=1e9+7;
int main(){
    int n,cnt=0;cin>>n;
    vector<bool>v(n,0);
    for(int i=0;i<n;i++){
        do{
            cnt++;
        }while(next_permutation(v.begin()+i,v.end()));
    }
    cout<<cnt<<"\n";
}