#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;cin>>n;
    n=p;
    for(int i=1;i<=(2*n-1);i++){
        for(int j=1;j<=(2*n-1);j++){
            cout<<p<<" ";
        }
        cout<<"\n";
        p--;
    }
}