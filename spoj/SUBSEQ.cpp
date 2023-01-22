// /* Date:23-03-2021 */
// /* Time:16:02:08 */
// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long int;
// #define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// ll subarraySum(ll a[],ll n, int k) {
//     ll sum=0,cnt=0;
//     unordered_map<ll,ll>mp;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
//         if(sum==k){
//             cnt++;
//         }
        
//         if(mp.find(sum-k)!=mp.end()){
//             cnt+=mp[sum-k];
//         }
//         mp[sum]++;
//     }
//     return cnt;
// }
// int main(){
//     IOS;
//     ll t,n;cin>>t;while(t--){
//         cin>>n;
//         ll a[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         int p=0;
//         cout<<subarraySum(a,n,p)<<endl;
//     }
// }  
/* Date:23-03-2021 */
/* Time:20:06:12 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n;cin>>n;
    int a[n],prefixsum[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    prefixsum[0]=0;
    for(int i=0;i<n;i++){
        prefixsum[i+1]=prefixsum[i]+a[i];
    }
    for(int i=0;i<=n;i++){
        cout<<prefixsum[i]<<" ";
    }
}