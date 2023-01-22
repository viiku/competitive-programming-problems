#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int CountPairs(int a[],int n,int k){
    int j=n-1,count=0;
    for(int i=0;i<n;i++){
        if(a[i]+a[j]==k && i<j){
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        ll sum=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        if(n<=2){
            cout<<0<<"\n";
        }else{
            int p=CountPairs(a,n,k);
            if(k>sum){
                cout<<0<<"\n";
            }else if(k<=sum){
                for(int i=0;i<n;i++){
                    if(i<n/2){
                        cout<<1<<" ";
                        p--;
                    }else if(i>=n/2){
                        cout<<0<<" ";
                    }
                }
            }
        }
    }
    return 0;
}