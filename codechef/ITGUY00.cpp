#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%6==1){
                sum+=1;
            }else if(a[i]%6==2){
                sum+=2;
            }else if(a[i]%6==3){
                sum+=3;
            }else if(a[i]%6==4){
                sum+=4;
            }else if(a[i]%6==5){
                sum+=5;
            }else if(a[i]%6==0){
                sum+=6;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}