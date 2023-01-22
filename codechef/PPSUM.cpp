#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d,n;
        cin>>d>>n;
        while(d>0){
            n=n*(n+1)/2;
            d--;
        }
        cout<<n<<"\n";
    }
    return 0;
}