/* Date:24-03-2021 */
/* Time:22:44:04 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,d;cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=d%5;
    if(k==1){
        for(int i=1;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[0];
    }else if(k==2){
        for(int i=2;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[0]<<" "<<a[1];       
    }else if(k==3){
        for(int i=3;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[0]<<" "<<a[1]<<" "<<a[2];         
    }else if(k==4){
        for(int i=4;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3];
    }else if(k==0){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }       
    }
}