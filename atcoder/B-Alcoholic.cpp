#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
using ld=long double;
int main(){
    ld n,x,vi,pi,p=0;cin>>n>>x;
    ll sum=0,cnt=0,i=0;
    while(n--){
        cin>>vi>>pi;
        p=(ld)(vi*(pi));
        sum+=p;
        if(sum>x*100){
            printf("%d\n",i+1);
            return 0;
        }
        i++;
    }
    puts("-1");
}