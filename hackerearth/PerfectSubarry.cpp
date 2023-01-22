#include<bits/stdc++.h>
using namespace std;
using ld=long double;
bool is_prefectsquare(ld k){
    if(k>=0){
        long long sq=sqrt(k);
        return (sq*sq==k);
    }
    return false;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int prefixsum[n];
    prefixsum[0]=a[0];
    for(int i=1;i<n;i++){
        prefixsum[i]=prefixsum[i-1]+a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(is_prefectsquare(prefixsum[j]-prefixsum[i])){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;    
}