/* Date:23-03-2021 */
/* Time:10:36:01 */
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const ll mod=(ll)7340033;
int main(){
    IOS;
    int n,k;cin>>n>>k;
    int a[n],prefixsum[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    prefixsum[0]=a[0];
    for(int i=1;i<k;i++){
        prefixsum[i]=prefixsum[i-1]+a[i];
    }
    for(int i=0;i<n;i++){
        cout<<prefixsum[i]<<" ";
    }
}