#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int t,n,x=-1,sum=0;cin>>t;while(t--){
        cin>>n;
        v.emplace_back(n);
        sum+=n;
    }
    cin>>x;
    if(sum%n!=0){
        cout<<sum<<-1<<"\n";
    }else{
        int sum1=0;
        for(int i=0;i<v.size();i++){
            sum1+=abs((sum/n)-v[i]);
        }
        cout<<sum1<<"\n";
    }
    return 0;
}