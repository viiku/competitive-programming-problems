/*21-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    long long int x=0;
    int n,x1=0,y=0,y1=0,z=0,z1=0,price,bedroom,square_footage;
    cin>>n;while(n--){
        cin>>price>>bedroom>>square_footage;
        // if(bedroom==1 || bedroom==2){
        //     x+=price;
        //     x1++;
        // }else if(bedroom==3 || bedroom==4){
        //     y+=price;
        //     y1++;
        // }else if(bedroom==5 || bedroom==6){
        //     z+=price;
        //     z1++;
        // }
        if(bedroom<=3 || square_footage<=4000){
            x+=price;
            x1++;
        }
    }
    cout<<x/x1<<endl;
    // cout<<x/x1<<"\n"<<y/y1<<"\n"<<z/z1<<"\n";
}