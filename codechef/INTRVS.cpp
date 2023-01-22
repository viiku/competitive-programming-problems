#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;cin>>t;while(t--){
        cin>>n>>k;
        int a[n],cnt=0,cnt1=0;
        bool ok=true,ok1=true,ok2=true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=-1){
                cnt++;
                if(a[i]>k){
                    ok=false;
                }

                if(a[i]<=1 && a[i]>=0){
                    cnt1++;
                }
            }
        }
        int p=(n+1)/2;
        if(cnt<p){
            cout<<"Regected\n";
        }else if(!ok && cnt>=p){
            cout<<"Too Slow\n";
        }else if(!ok &&  cnt1==n && cnt>=p){
            cout<<"Bot\n";
        }else if(!ok && cnt1!=n && cnt>=p){
            cout<<"Accepted\n";
        }
    }
    return 0;
}