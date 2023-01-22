#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        scanf("%lld%lld",&n,&k);
        if(k==0 && n==0)
        printf("0 0\n");
        else if( k==0 && n!=0)
        printf("0 %lld\n",n);
        else if (k!=0 && n==0)
            printf("0 0\n");
        else
       printf("%lld %lld\n",n/k,n%k);    
    }
    return 0;
}