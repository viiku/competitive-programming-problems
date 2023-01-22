#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cnt=0,k;cin>>n>>m>>k;
    int t[1001],p;
    while(n--){
        int sum=0;
        for(int i=0;i<k;i++){
            cin>>t[i];
            sum+=t[i];
        }
        cin>>p;
        if(sum>=m && p<=10){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}