/* Date:02-04-2021 */
/* Time:10:23:13 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void minSubArrayLen(int target, vector<int>nums) {
    int n=nums.size(),mn=INT_MAX;
    vector<int>a(n+1,0);
    for(int i=0;i<n;i++){
        a[i+1]=a[i]+nums[i];
    }
    int l=0,r=n,mid=0;
    while(l<=r){
        
    }
}
int main(){
    IOS;
    int k,target;cin>>k>>target;
    vector<int>a(k);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    minSubArrayLen(target,a);
}