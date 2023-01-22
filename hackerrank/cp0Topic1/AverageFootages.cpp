/*21-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,price,bedroom,square_footage,sum1=0,sum2=0,cnt1=0,cnt2=0;cin>>n;while(n--){
        cin>>price>>bedroom>>square_footage;
        if(bedroom<=3){
            cnt1++;
            sum1+=square_footage;
        }else if(bedroom>=4){
            cnt2++;
            sum2+=square_footage;
        }
    }
    cout<<sum1/cnt1<<" "<<sum2/cnt2<<endl;
}