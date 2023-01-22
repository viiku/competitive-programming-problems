#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int countDigit(int n){
    int cnt=0;
    while(n>0){
        cnt++;
        n/=10;
    }
    return cnt;
}
ll binaryexpo(int a,int b){
    ll result=1;
    while(b>0){
        if(b%2==1){
            result=result*a;
        }
        b/=2;
        a*=a;
    }
    return result;
}
ll  sum(int n,int k){
    ll sum1=0;
    while(n>0){
        sum1+=binaryexpo(n%10,k);
        n/=10;
    }
    return sum1;
}
int main(){
    int n;cin>>n;
    int k=countDigit(n),p=n;
    if(sum(n,k)==p){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}