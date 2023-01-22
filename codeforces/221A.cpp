#include<bits/stdc++.h>
using namespace std;
int fn(int x){
    if(x==1)
       return 0;
    else
       int q=fn(x);
       int p=fn(x-1);
       p=q;
       return swap(p,q);
}
int main(){
    int n;cin>>n;
    cout<<fn(n)<<" ";
}