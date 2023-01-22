#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int p=n%100,q=p%20,r=q%10,s=r%5;
    cout<<n/100+p/20+q/10+r/5+s;
}