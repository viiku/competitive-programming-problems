#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum1=0,sum2=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            sum2+=b[i];
        }
        sum1-=*max_element(a,a+n);
        sum2-=*max_element(b,b+n);
        if(sum1<sum2){
            cout<<"Alice"<<"\n";
        }else if(sum2<sum1){
            cout<<"Bob"<<"\n";
        }else{
            cout<<"Draw"<<"\n";
        }
    }
    return 0;
}