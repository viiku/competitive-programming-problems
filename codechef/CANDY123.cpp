#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b;cin>>a>>b;
        int i=1,j=2;
        while(i<=max(a,b)){
            if(i<a){
                a-=i;
                i+=2
            }else if(j<b){
                b-=j;
                j+=2;
            }
        }
        if(i>a){
            cout<<"Bob"<<"\n";
        }else if(i==a){
            cout<<"Limak"<<"\n";
        }
    }
    return 0;
}