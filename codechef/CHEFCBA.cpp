#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    vector<int>v={a,b,c,d};
    sort(v.begin(),v.end());
    if(v[0]*v[3]==v[1]*v[2]){
        cout<<"Possible\n";
    }else{
        cout<<"Impossible\n";
    }
    return 0;
}