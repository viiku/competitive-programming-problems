/*21-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    bool ok=true;
    int n,cnt=0,mn=INT_MAX,mn1=INT_MAX,price,bedroom,square_footage;
    int price1=0,bedroom1=0,square_footage1=0,price2=0,bedroom2=0,square_footage2=0;
    cin>>n;while(n--){
        cin>>price>>bedroom>>square_footage;
        if(price<=400000 && bedroom>=4 && square_footage>=2500){
            cnt++;
            int k=price/square_footage;
            if(k<mn){
                if(ok){
                    price1=price;
                    bedroom1=bedroom;
                    square_footage1=square_footage;
                    mn=k;
                    ok=false;
                }else{
                    price2=price;
                    bedroom2=bedroom;
                    square_footage2=square_footage;
                    swap(price1,price2);                
                    swap(bedroom1,bedroom2);                
                    swap(square_footage1,square_footage2);                
                    mn=k;                                        
                }
            }else if(k>mn && k<mn1){
                price2=price;
                bedroom2=bedroom;
                square_footage2=square_footage;
                mn1=k;
            }
        }
    }
    // cout<<cnt;
    if(cnt==1){
        cout<<price1<<" "<<bedroom1<<" "<<square_footage1<<endl;
    }else if(cnt>=2){
        cout<<price1<<" "<<bedroom1<<" "<<square_footage1<<endl;
        cout<<price2<<" "<<bedroom2<<" "<<square_footage2<<endl;
    }else{
        cout<<"You are out of luck, Prof. Goldluck."<<endl;
    }
}