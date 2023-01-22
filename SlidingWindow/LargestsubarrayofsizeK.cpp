#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;cin>>n>>sum;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int i=0,j=0,sum1=0,mx=0;
    while(j<n){
        sum1+=a[j];
        if(sum1<sum){
            j++;
        }else if(sum1==sum){
            mx=max(mx,j-i+1); 
            j++;   
        }else{
            while(sum1>sum){
                sum1-=a[i];
                i++;
                if(sum1==sum){
                    mx=max(mx,j-i+1);
                }
            }
            j++;
        }
    }
    cout<<mx<<endl;
}