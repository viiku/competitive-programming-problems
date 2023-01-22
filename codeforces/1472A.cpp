#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll t,w,h,n;cin>>t;while(t--){
        cin>>w>>h>>n;
        if(w%2==0 && h%2!=0){
            if((w/2)+1>=n){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }else if(w%2!=0 && h%2==0){
            if((h/2)+1>=n){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }else if(w%2==0 && h%2==0){
            if((ll)(w/2)*(h/2)+2>=n){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }else if(w%2!=0 && h%2!=0){
            if(n==1){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }
        cout<<"\n";
    }
    return 0;
}