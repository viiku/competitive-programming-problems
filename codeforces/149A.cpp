#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;cin>>k;
    int a[12],sum=0;
    for(int i=0;i<12;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+12,greater<int>());
    if(k==0){
        cout<<0<<"\n";
    }else if(k<=sum){
        for(int i=0;i<12;i++){
            k-=a[i];
            if(k<=0){
                cout<<i+1;
                break;
            }
        }
    }else if(k>sum){
        cout<<-1;
    }
    return 0;
}