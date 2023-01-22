/*21-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,w1,w2,x1,x2,m;cin>>t;while(t--){
        cin>>w1>>w2>>x1>>x2>>m;
        int k=w2-w1;
        if(k>=x1*m && k<=x2*m){
            cout<<"1\n";
        }else{
            cout<<"0\n";
        }
    }
}