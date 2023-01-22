#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mn=1e5;
    for(int i=0;i<n;i++){
        int sum=a[i]*15;
        for(int j=0;j<a[i];j++){
            int p;cin>>p;
            sum+=p*5;
        }
        mn=min(mn,sum);
    }
    cout<<mn<<"\n";
    return 0;
}