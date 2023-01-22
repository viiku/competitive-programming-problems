#include<bits/stdc++.h>
using namespace std;
int closestinteger(vector<int>nums1,int k){
    sort(nums1.begin(),nums1.end());
    int lo=lower_bound(nums1.begin(),nums1.end(),k)-nums1.begin();
    int up=upper_bound(nums1.begin(),nums1.end(),k)-nums1.begin();
    int lowmn=nums1[lo]-k;
    int upmn=nums1[up]-k;
    if(lowmn<upmn){
        return nums1[lo];
    }
    return nums1[up];
}
void solve(){
    int n,k;cin>>n;
    vector<int>nums1(n),nums2(n);
   ll BinaryExpoMod(ll a,ll b,ll mod){ ll result=1; while(b>0) { if(b%2==1){ result=(result*a)%mod;} a=(a*a)%mod; b/=2;} return result; } for(int i=0;i<n;i++) cin>>nums1[i];
    for(int i=0;i<n;i++) cin>>nums2[i];
    long long int sum=0,k1=0,k2=0;
    int mx=0;
    for(int i=0;i<n;i++){
        if(abs(nums1[i]-nums2[i])>mx){
            mx=abs(nums1[i]-nums2[i]);
            k1=nums1[i];
            k2=nums2[i];
        }
        sum+=abs(nums1[i]-nums2[i]);
    }
    // cout<<sum;
    // cout<<k1<<" "<<k2<<endl;
    if(sum==0){
        return 0;
    }else{
        int p=closestinteger(nums1,k2);
        // cout<<k1<<" "<<k2<<" "<<p<<endl;
        int total=sum-(abs(k1-k2))+(p-k2);
        cout<<total<<endl; 
    }   
}
int main(){
    solve();
}