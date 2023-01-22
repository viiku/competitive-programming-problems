#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int p=a,q=b;
    a-=c;
    b-=c;
    if(a+b+c>=n){
        cout<<"-1"<<"\n";
    }else{
        if(p<c || q<c){
            cout<<"-1"<<"\n";
        }else{
            cout<<n-(a+b+c)<<"\n";
        }
    }
}