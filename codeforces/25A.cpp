#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],cnt=0,cnt1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            cnt++;
        }else{
            cnt1++;
        }
    }
    for(int i=0;i<n;i++){
        if(cnt==1){
            if(a[i]%2==0){
                cout<<i+1<<"\n";
                break;
            }
        }else if(cnt1==1){
            if(a[i]%2!=0){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
    return 0;
}