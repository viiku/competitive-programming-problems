#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        int n,c;cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            c-=a[i];
        }
        if(c<0){
            cout<<"No"<<"\n";
        }else{
            cout<<"Yes"<<"\n";
        }
    }
    return 0;
}