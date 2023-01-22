#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x,y,p=0;
        cin>>n>>k>>x>>y;
        p=abs(x-y);
        if(x<=y){
            if((x+k)%n==y){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }else if(y>n){
            cout<<"NO"<<"\n";
        }else{
            if((x-k)%n==y){
                cout<<"YES"<<"\n";
            }else{  
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}