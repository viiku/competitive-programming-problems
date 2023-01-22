#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        if(n%3==0){
            cout<<(n/3)*((2*n*n+1));
        }else if(n%3!=0){
            if(n==1){
                cout<<1;
            }else{
                cout<<n*((2*n*n+1)/3);
            }
        }
        cout<<"\n";
    }
    return 0;
}