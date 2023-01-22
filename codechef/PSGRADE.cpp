#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,Amin,Bmin,Cmin,Tmin,A,B,C;cin>>t;while(t--){
        cin>>Amin>>Bmin>>Cmin>>Tmin>>A>>B>>C;
        if(A>=Amin && B>=Bmin && C>=Cmin && A+B+C>=Tmin){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}