#include<bits/stdc++.h>
using namespace std;
int SumDigit(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
bool luckyDigit(int p){
    while(p>0){
        if(p%10!=4 || p%10==7){
            return false;
        }
        p/=10;
    }
    return true;
}
int main(){
    int n;cin>>n;
    if(n%4==0 || n%4==7 || n%7==0 || n%7==4){
        bool ok=true;
        int i=4;
        while(true){
            int k=SumDigit(i);
            if(k==n){
                cout<<i<<endl;
            }else if(k>n){
                ok=false;
                break;
            }
        }
    }   
}