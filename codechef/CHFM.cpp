#include<bits/stdc++.h>
using namespace std;
using ld=long double;
using ll=long long int;
void Solve_test(int a[],int n,ll sum){
    ld k=0;
    int p=0;
    k=(ld)sum/n;
//    cout<<k;
    for(int i=1;i<=n;i++){
        if(sum==n*a[i]){
            cout<<i<<"\n";
            p++;
            break;
        }
    }
    if(p==0){
        cout<<"Impossible"<<"\n";
    }
}
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int a[n];
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        Solve_test(a,n,sum);
    }
    return 0;
}