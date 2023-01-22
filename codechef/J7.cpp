#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
using ld=long double;
int main(){
    int t;
    cin>>t;
    while(t--){
        ld p,s;
        cin>>p>>s;
        ld l1=0,l2=0,b1=0,b2=0;
        if(p*p>=24*s){
            b1=(p+sqrt(p*p-24*s))/12; 
            b2=(p-sqrt(p*p-24*s))/12;
            l1=(p/4)-2*b1;
            l2=(p/4)-2*b2;
            cout<<max((l1*b1*b1),(l2*b2*b2))<<"\n";
        }else{
            cout<<"0"<<"\n";
        }
    }
    return 0;
}