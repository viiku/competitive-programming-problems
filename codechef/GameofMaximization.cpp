#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,sum1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2!=0){
            sum+=a[i];
        }else{
            sum1+=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(sum>sum1 && i%2!=0){
            sum-=a[i];
        }else if(sum1>sum && i%2==0){
            sum1-=a[i];
        }else{
            cout<<sum+sum1<<"\n";
            break;
        }
    }
}