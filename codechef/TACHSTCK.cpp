#include<bits/stdc++.h>
using namespace std;
using ll=long long int ;
int main(){
    int n,d;cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=0,cnt=0;
    while(j<n){
        if(a[j]-a[i]==d){
            cnt++;
            i++;
            j++;
        }else if(a[j]-a[i]>d){
            i++;
        }else if(a[j]-a[i]<d){
            cnt++;
            j++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}