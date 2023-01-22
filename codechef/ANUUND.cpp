#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int j=n-1;
        for(int i=0;i<n;i++){
            if(i<=j){
                cout<<a[i]<<a[j-i];
                j--;
            }
        }
    }
    return 0;
}