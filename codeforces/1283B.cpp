#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%k==0){
            cout<<n<<"\n";
        }else{
            int p=(n%k);
            int q=n-p;
            if(p>=(k/2)){
                cout<<q+(k/2)<<"\n";
            }else{
                cout<<q+p<<"\n";
            }
        }
    }
    return 0;
}