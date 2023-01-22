#include<bits/stdc++.h>
using namespace std;
long long compute_hash(string str){
    const int p=31;
    const long long int m=1e9+9;
    long long hash_value=0;
    long long p_pow=1;
    for(int i=0;i<str.size();i++){
        hash_value=(hash_value+(str[i]-'a'+1)*p_pow)%m;
        p_pow=(p_pow*p)%m;
    }
    return hash_value;
}
vector<vector<int>>Array_Hash(vector<string>vs){
    int n=vs.size();
    vector<pair<long long,int>>hashes(n);
    for(int i=0;i<n;i++){
        hashes[i]={compute_hash(vs[i]),i};
    }
    for(int i=0;i<n;i++){
        cout<<hashes[i]<<" ";  
    }
}
int main(){
    int  n;
    cin>>n;
    vector<string>vs(n);
    for(int i=0;i<vs.size();i++){
        cin>>vs[i];
    }
/*    for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<" ";
    }*/
//    compute_hash(str);
    Array_Hash(vs);
    return 0;
}