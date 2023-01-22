#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n;cin>>n;
    if(n<7){
        if(n<=2){
            cout<<0<<" "<<n<<"\n";
        }else if(n>2 && n<=5){
            cout<<0<<" "<<2<<"\n";
        }else if(n>5){
            cout<<1<<" "<<2<<"\n";
        }
    }else{
        if(n%7==0){
            cout<<2*(n/7)<<" "<<2*(n/7)<<"\n";
        }else{
            if(n%7>=2){
                cout<<2*(n/7)<<" "<<2*(n/7)+2<<"\n";
            }else{
                cout<<2*(n/7)<<" "<<2*(n/7)
            }
        }
    }
    return 0;
}