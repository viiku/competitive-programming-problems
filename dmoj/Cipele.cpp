/* Date:25-03-2021 */
/* Time:16:23:40 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int>v;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int i=0,j=0;
    while(i<(int)nums1.size() && j<(int)nums2.size()){
        if(nums1[i]==nums2[j]){
            v.push_back(nums1[i]);
            i++;j++;
        }else if(nums1[i]>nums2[j]){
            j++;
        }else if(nums1[i]<nums2[j]){
            i++;
        }
    }
    return v;
}
int main(){
    IOS;
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m),c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    c=intersect(a,b);
    for(int i:c){
        cout<<i<<" ";
    }
}