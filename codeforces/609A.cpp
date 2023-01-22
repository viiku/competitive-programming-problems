#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    if(a[0]>=m){
        cout<<1<<"\n";
    }else{
        int sum=0,count1=0;
        for(int i=0;i<n;i++){
            if(sum<m){
                sum+=a[i];
                count1++;
            }else if(sum>=m){
                break;
            }
        }
        cout<<count1<<"\n";
    }
    return 0;
}