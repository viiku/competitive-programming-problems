#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v;
        v.emplace_back(a);
        v.emplace_back(b);
        v.emplace_back(c);
        sort(v.begin(),v.end());
        int p=abs(v[0]+1-(v[1]-1)),q=abs(v[0]+1-(v[2]-1)),r=abs(v[1]+1-(v[2]-1));
        if()
    }
    return 0;
}