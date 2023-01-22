#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.emplace_back(i);
    }
    if(n==1){
        cout<<1<<"\n"<<n<<"\n";
    }else if(n==2){
        cout<<1<<"\n"<<1<<"\n";
    }else if(n==3){
        cout<<2<<"\n"<<v[0]<<" "<<v[2]<<"\n";
    }else{
        
    }
}