#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[7],b[7];
    for(int i=0;i<7;i++) cin>>a[i];
    for(int i=0;i<7;i++) cin>>b[i];
    int sum=0;
    for(int i=0;i<7;i++){
        sum+=abs(a[i]-b[i]);
    }
    cout<<sum<<endl;
}