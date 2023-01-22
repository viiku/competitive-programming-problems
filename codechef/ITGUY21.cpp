#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k;cin>>t;while(t--){
        cin>>k;
        for(int i=0;i<k;i++){
            for(int j=0;j<=i;j++){
                cout<<j;
            }
            cout<<"\n";
        }
    }
    return 0;
}