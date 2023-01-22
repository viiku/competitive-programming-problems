#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n],mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int i=0,j=n-1,cnt=0,cnt1=0;
    if(k>=mx){
        cout<<n<<endl;
    }else{
        while(a[i]<=k || a[j]<=k){
            if(a[i]<=k && i<j){
                cnt++;
                i++;
            }

            if(a[j]<=k && i<j){
                cnt1++;
                j--;
            }
        }
        cout<<cnt+cnt1<<endl;
    }
}