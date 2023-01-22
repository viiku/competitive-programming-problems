#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;cin>>t;while(t--){
        cin>>n>>k;
        int p=0;
        vector<char>v;
        for(int i=1;i<=n;i++){
            if(i<=k){
                v.emplace_back('a');
            }else if(i>k){
                if(p==0){
                    v.emplace_back('b');
                    p++;
                }else if(p==1){
                    v.emplace_back('c');
                    p--;
                }
            }
        }
        for(auto it:v){
            cout<<it;
        }
        cout<<"\n";
    }
    return 0;
}