#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int p=0;
        for(int i=0;i<n;i++){
            if(i==0){
                if(a[0]==5){
                    sum+=a[0];
                }else{
                    cout<<"NO"<<"\n";
                    break;
                }
            }else{
                if(a[i]>5){
                    if(sum-a[i]//)
                }else{
                    sum+=a[i];
                }
            }
        }
    }
}