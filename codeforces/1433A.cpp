#include<bits/stdc++.h>
using namespace std;
/*
int countdigit(int x){
    int count=0;
    while(x!=0){
        x/=10;
        count++;
    }
    return count;
}*/
int main(){
    int a[36]={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    int t;cin>>t;
    vector<int>v(t+1);
    while(t--){
        int x;cin>>x;
        v.emplace_back(x);
    }
    for(int i=0;i<t;i++){
        cout<<v[i]<<" ";
    }
    int sum=0;    
    for(int i=0;i<t;i++){
        for(int j=0;j<36;j++){
            if(v[i]==a[j]){
                sum+=floor(log10(a[i])+1);
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}