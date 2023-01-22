#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[m];
        vector<bool>v(n,true);
        for(int i=1;i<=m;i++){
            cin>>a[i];
            v[a[i]]=false;
        }
        int p=0;
        vector<int>v1,v2;
        for(int i=1;i<=n;i++){
            if(v[i]!=false){
                p++;
                if(p%2!=0){
                    v1.emplace_back(i);
                }else{
                    v2.emplace_back(i);
                }
            }
        }
        for(auto x:v1){
            cout<<x<<" ";
        }
        cout<<"\n";
        for(auto y:v2){
            cout<<y<<" ";
        }
    }
    return 0;
}