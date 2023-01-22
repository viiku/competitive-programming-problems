#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,p=0,q=0,s=0;cin>>n;
        int l[n],r[n];
        for(int i=0;i<n;i++){
            cin>>l[i]>>r[i];
        }
        for(int i=0;i<n;i++){
            if(l[i]*r[i]>p){
                p=l[i]*r[i];
                q=r[i];
                s=i-1;
            }else if(l[i]*r[i]==p){
                if(r[i]>q){
                    q=r[i];
                    s=i-1;
                }else if(r[i]==q){
                    if(i>s){
                        continue;
                    }else{
                        s=i-1;
                    }
                }else{
                    continue;
                }
            }
        }
        cout<<s<<"\n"; 
    }
    return 0;
}