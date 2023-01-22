#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(n%2==0){
            int sum=0;
            for(int i=n;i>=(n/2);i--){
                sum+=a[i];
            }
            cout<<sum<<"\n";
        }else if(n%2!=0){
            
        }
    }
    return 0;
}