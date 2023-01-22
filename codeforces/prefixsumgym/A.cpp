// /* Date:23-03-2021 */
// /* Time:21:01:39 */
// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long int;
// #define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// void range_sum(ll a[],ll n,ll left,ll right){
//     ll prefixsum[n+1]={0};
//     for(int i=0;i<n;i++){
//         prefixsum[i+1]=prefixsum[i]+a[i];
//     }
//     cout<<prefixsum[right]-prefixsum[left-1]<<endl;
// }
// int main(){
//     IOS;
//     ll n,q,left,right;cin>>n;
//     ll a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cin>>q;while(q--){
//         cin>>left>>right;
//         range_sum(a,n,left,right);
//     }
// }
#include <bits/stdc++.h>
 
using namespace std;
using ll=long long int;
vector<ll> findPrefixSums(const vector<ll>& a) {
    int n = a.size();
    vector<ll> prefixSums(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefixSums[i + 1] = prefixSums[i] + a[i];
    }
    return prefixSums;
}
 
int main() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll& val : arr) {
        cin >> val;
    }
    vector<ll> prefixSums = findPrefixSums(arr);
 
    int queriesNumber;
    cin >> queriesNumber;
    for (int i = 0; i < queriesNumber; i++) {
        int left, right;
        cin >> left >> right;
        left--;
        cout << prefixSums[right] - prefixSums[left] << '\n';
    }
    return 0;
}