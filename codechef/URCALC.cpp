#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;char ch;cin>>a>>b>>ch;
    if(ch=='+'){
        cout<<(double)a+b<<"\n";
    }else if(ch=='-'){
        cout<<(double)a-b<<"\n";
    }else if(ch=='*'){
        cout<<(double)a*b<<"\n";
    }else if(ch=='/'){
        cout<<fixed<<setprecision(6)<<(double)a/b<<"\n";
    }
    return 0;
}