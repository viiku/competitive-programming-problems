#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n;
    int t=n-1;
    vector<int>v;
    while(t--){
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    int a,b,sum=0,j=0;
    cin>>a>>b;
    for(int i=a;i<b;i++){
        if(j<v.size()){
            sum+=v[j];
        }
        j++;
    }
    cout<<sum<<"\n";
    return 0;
}