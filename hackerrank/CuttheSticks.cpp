#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    cout<<n<<"\n";
    for(int i=0;i<n-1;i++){
        int mn=INT_MAX;
        for(int j=0;j<n;j++){
            if(a[j]>0){
                mn=min(mn,a[j]);
            }
        }
        int cnt=0;
        for(int k=0;k<n;k++){
            if(a[k]>0){
                a[k]-=mn;
                if(a[k]>0){
                    cnt++;
                }
            }
        }
        if(cnt!=0){
            cout<<cnt<<"\n";
        }
    }
}