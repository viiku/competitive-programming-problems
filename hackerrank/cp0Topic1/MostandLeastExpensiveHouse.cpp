/*21-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,mx=0,k=0,p=0,mn=INT_MAX,k1=0,p1=0,price,bedroom,square_footage;cin>>n;while(n--){
        cin>>price>>bedroom>>square_footage;
        if((bedroom==2 || bedroom==3) &&(price>mx)){
            mx=max(mx,price);
            k=bedroom;
            p=square_footage;
        }else if((bedroom==4 || bedroom==5) && (price<mn)){
            mn=min(mn,price);
            k1=bedroom;
            p1=square_footage;
        }
    }
    cout<<mx<<" "<<k<<" "<<p<<endl;
    cout<<mn<<" "<<k1<<" "<<p1<<endl;
}