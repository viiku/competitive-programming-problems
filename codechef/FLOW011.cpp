#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        double n;cin>>n;
        if(n<1500){
            cout<<fixed<<setprecision(2)<<n+(0.1)*n+(0.9)*n<<"\n";
        }else{
            cout<<fixed<<setprecision(2)<<n+500+(0.98)*n<<"\n";
        }
    }
    return 0;
}