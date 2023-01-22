#include<bits/stdc++.h>
using namespace std;
bool specialnumber(int n1){
    int sum=0,cnt=0;
    while(n1>0){
        sum+=n1%10;
        cnt++;
        n1/=10;
    }
    if(sum%cnt==0){
        return true;
    }
    return false;
}
int main(){
    int t,n2;cin>>t;while(t--){
        cin>>n2;
        // specialnumber(n2);
        if(specialnumber(n2)){
            cout<<"Good Work\n";
        }else{
            cout<<"Try Again\n";
        }
    }
}