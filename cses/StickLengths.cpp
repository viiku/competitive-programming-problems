#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==0){
        int mid=(n/2)+1,mid1=n/2;
        ll sum=0,sum1=0;
        for(int i=0;i<n;i++){
            sum+=abs(a[mid]-a[i]);
            sum1+=abs(a[mid1]-a[i]);
        }
        cout<<min(sum,sum1)<<"\n";
    }else{
        int mid=n/2;
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(a[mid]-a[i]);
        }
        cout<<sum<<"\n";
    }
}