#include<bits/stdc++.h>
#define ll long long int
using  namespace std;
int main(){
    ll n,p=0,q=0;
    cin>>n;
    ll  a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==0){
            p++;
        }else{
            q++;
        }
    }
    ll count=0,count1=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            count++;
            if(count==p){
                cout<<i<<"\n";
                break;
            }else{
                count;
            }
        }else{
            count1++;
            if(count1==q){
                cout<<i<<"\n";
                break;
            }else{
                count1;
            }
        }
    }
    return 0;
}