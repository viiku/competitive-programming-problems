#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,s;cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll i=0,j=0,sum=0,mn=INT_MAX,cnt=0;
    while(j<n){
        sum+=a[j];
        if(sum<s){
            j++;
        }else if(sum==s){
            cnt++;
            mn=min(mn,j-i+1);
            sum-=a[i];
            i++;j++;
        }else if(sum>s){
            while(sum>s){
                sum-=a[i];
                i++;
            }
            if(sum==s){
                cnt++;
                mn=min(mn,j-i+1);
            }
            j++;
        }
    }
    cout<<cnt;
}