#include<bits/stdc++.h>
using namespace std;
int sumofDigit(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    map<int,int>mp;
    int t,x;cin>>t;while(t--){
        cin>>x;
        int i=1,k=0,p=0,q=0;
        while(1){
            k=sumofDigit(i);
            if(k==x){
                p=i;
                break;
            }
            i++;
        }
        string str=to_string(p);
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        if(mp.size()<str.size()){
            cout<<"-1"<<"\n";
        }else{
            cout<<p<<"\n";
        }
    }
    return 0;
}