/*21-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,mn=INT_MAX,mn1=INT_MAX,price,bedroom,square_footage;
    bool ok=true;
    int price3=0,bedroom3=0,square_footage3=0;
    int price1=0,bedroom1=0,square_footage1=0,price2=0,bedroom2=0,square_footage2=0;
    cin>>n;while(n--){
        cin>>price>>bedroom>>square_footage;
        if(bedroom==3){
            if(price<mn){
                if(ok){
                    price1=price;
                    bedroom1=bedroom;
                    square_footage1=square_footage;
                    mn=price;
                    ok=false;
                }else{
                    price2=price;
                    bedroom2=bedroom;
                    square_footage2=square_footage;
                    swap(price1,price2);                
                    swap(bedroom1,bedroom2);                
                    swap(square_footage1,square_footage2);                
                    mn=price;                                        
                }
            }else if(price>mn && price<mn1){
                price3=price;
                bedroom3=bedroom;
                square_footage3=square_footage;
                mn1=price;
            }
        }
    }
    // cout<<"\n";
    if(price2<price3){
        if(price2!=0){
            cout<<price2<<" "<<bedroom2<<" "<<square_footage2<<endl;
        }else{
            cout<<price3<<" "<<bedroom3<<" "<<square_footage3<<endl;        
        }
    }else if(price2>price3 && price3!=0){
        if(price3!=0){
            cout<<price3<<" "<<bedroom3<<" "<<square_footage3<<endl;
        }else{
            cout<<price2<<" "<<bedroom2<<" "<<square_footage2<<endl;        
        }
    }
    // cout<<price1<<" "<<bedroom1<<" "<<square_footage1<<endl;
}