#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n,m;cin>>t;while(t--){
        ll sum=0;
        cin>>n>>m;
        vector<int>v(n,10);
        int x,y,z;
        while(m>0){
            cin>>x>>y>>z;
            for(int i=0;i<n;i++){
                if(i>=(x-1) && i<=(y-1)){
                    v[i]*=z;
                }
            }
            m--;
        }
        ll k=accumulate(v.begin(),v.end(),0);
        cout<<k/n<<"\n";
    }
    return 0;
}