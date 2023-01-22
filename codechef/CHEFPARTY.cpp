#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(sum>=a[i]){
                sum+=1;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}