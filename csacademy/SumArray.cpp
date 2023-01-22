#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        // sum-=2*a[i];
        if(sum==2*a[i]){
            cout<<i+1<<"\n";
            return 0;
        }
    }
    cout<<"-1"<<"\n";
}