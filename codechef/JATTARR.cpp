#include<bits/stdc++.h>
using namespace std;
int t,q,d;
bool islucky(int n){
    while(n>0){
        if(n%10==d){
            return true;
        }
        n/=10;
    }
    return false;
}
bool islucky1(int k){
    while(k>0){
        k-=d;
        if(islucky(k)){
            return true;
        }
    }
    return false;
}
int main(){
    cin>>t;while(t--){
        cin>>q>>d;
        int a[q];
        for(int i=0;i<q;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            if(a[i]%d==0  || islucky(a[i]) || islucky1(a[i])){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}