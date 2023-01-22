#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,c;
        cin>>n>>m;
        int p[m];
        for(int i=0;i<m;i++){
            cin>>p[i];
        }
        sort(p,p+m);
        int mx=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>c;
            for(int i=0;i<c;i++){
                cin>>v[i];
            }
        }
        int sum=0;
        for(int i=0;i<m;i++){
            if(i==p[i]){
                int q=*max_element(v.begin(),v.end());
                sum+=q;
                v[i]=0;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}