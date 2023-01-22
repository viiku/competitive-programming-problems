#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        bool ok=false;
        vector<int>a(n);
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>i+1){
                ok=true;
            }
        }
        if(!ok){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(a[i]<i+1){
                    cnt+=abs(i+1-a[i]);
                }
            }
            if(cnt%2==0){
                cout<<"Second\n";
            }else{
                cout<<"First\n";
            } 
        }else{
            cout<<"Second\n";
        }  
    }
}