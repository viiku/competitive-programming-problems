#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;cin>>n;
    string str; cin>>str;
    vector<int>v1(n);
    for(int i=0;i<str.size();i++){
        v1[i]=str[i]-'0';
    }
    int p=0,sum=0,sum1=0;
    for(int i=0;i<v1.size();i++){
        if((v1[i]==7)|| (v1[i]==4)){
            p++;
        }
    }
    if(p==n){
        for(int i=0;i<n;i++){
            if(i<(n/2)){
                sum+=v1[i];
            }else if(i>=(n/2)){
                sum1+=v1[i];
            }
        }
        if(sum==sum1){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}