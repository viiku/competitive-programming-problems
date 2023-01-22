#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int p=n%10;
    int q=p%5;
    cout<<n/10+p/5+q<<endl;
}