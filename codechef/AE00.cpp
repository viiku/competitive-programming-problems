#include<bits/stdc++.h>
using namespace std;
int CountRect(int n){
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        for(int j=i;j*i<=n;j++){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;cin>>n;
    cout<<CountRect(n)<<"\n";
    return 0;
}