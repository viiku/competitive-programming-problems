#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n;string str;cin>>t;while(t--){
        cin>>str;
        n=(int)str.size();
        int ones=0,zeros=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                ones++;
            }
        }
        zeros=n-ones;
        int i=0,j=0,mx=0,cnt=0;
        bool ok=false;
        while(j<n){
            if(str[j]=='1' && !ok){
                cnt++;
                i=j;
                ok=true;
            }else if(str[j]=='1' && ok){
                cnt++;
                mx=max(mx,cnt);
            }else{
                cnt=0;
                ok=false;
            }
            j++;
        }
        if(mx<ones && zeros!=0){
            cout<<mx+1<<endl;
        }else{
            cout<<mx<<endl;
        }
    }
}