#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,v1,x2,v2;cin>>x1>>v1>>x2>>v2;
    if((x2>=x1 && v2>v1) ||(x1>=x2 && v1>v2)){
        cout<<"NO\n";
    }else{
        int X=x1+v1,Y=x2+v2;
        int lcm=X*Y/__gcd(X,Y);
        int p=0;
        for(int i=lcm;i<=100000000;i+=lcm){
            if((i-x1)/v1==(i-x2)/v2){
                p++;
            }
        }
        if(p!=0){
            cout<<"YES\n";
        }else{
            cout<<p<<"NO\n";
        }
    }
    return 0;
}