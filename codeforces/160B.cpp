#include<bits/stdc++.h>
using namespace std;
int main(){ //TODO
    int t,n;cin>>t>>n;
    string str=to_string(n);
    int j=(str.size()/2)+1;
    sort(str.begin(),str.begin()+n);
    sort(str.begin()+n+1,str.end());
    int cnt=0,cnt1=0;
    for(int i=0;i<str.size();i++){
        if(str[i]<str[j] && i<j){
            cnt++;
        }else if(str[i]>str[j]){
            cnt1++;
        }
        j++;
    }
    if(cnt==str.size()/2 && cnt1==0){
        cout<<"YES\n";
    }else if(cnt1=str.size()/2 && cnt==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}