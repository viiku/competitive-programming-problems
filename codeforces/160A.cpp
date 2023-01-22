#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int sum1=0,cnt=0;
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        sum1+=a[i];
        sum-=a[i];
        if(sum1<=sum){
            cnt++;
        }else if(sum1>sum){
            break;
        }
    }
    cout<<cnt+1<<"\n";
    return 0; 
}