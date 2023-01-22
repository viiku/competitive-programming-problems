#include<bits/stdc++.h>
using namespace std;
void count(int a[],int b[],int n,int m,int k){
    int cnt=0;
    set<int>s;
    for(int i=0;i<n;i++){
        int l=0,r=m-1,mid=0,ans=0;
        while(l<=r){
            mid=l+(r-l)/2;
            if(abs(b[mid]-a[i])<=k){
                if(a[i]<=b[mid]){
                    ans=mid;
                    r=mid-1;
                }else{
                    ans=mid;
                    l=mid+1;
                }
            }else{
                if(b[i]>a[i]){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
        }
        cout<<ans<<" ";
        if(!s.count(ans)){
            s.insert(ans);
        }
    }
    cout<<s.size();
    // return cnt;
}
int main(){
    int n,m,k;cin>>n>>m>>k;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(b,b+m);
    count(a,b,n,m,k);
}