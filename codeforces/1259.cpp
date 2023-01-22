#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ve,vo;
    while(n--){
        int a;
        cin>>a;
        if(a%2==0){
            ve.emplace_back(a);
        }else{
            vo.emplace_back(a);
        }
    }
    sort(ve.begin(),ve.end());
    sort(vo.rbegin(),vo.rend());
    for(auto x:ve){
        cout<<x<<"\n";
    }
    for(auto y:vo){
        cout<<y<<"\n";
    }
    return 0;
}