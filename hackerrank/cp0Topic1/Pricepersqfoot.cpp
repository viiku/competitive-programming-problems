/*21-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,price,bedroom,square_footage;cin>>n;while(n--){
        cin>>price>>bedroom>>square_footage;
        cout<<price/square_footage<<endl;
    }
}