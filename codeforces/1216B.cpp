/* Date:26-03-2021 */
/* Time:11:14:12 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int x=0;
    for(int i=0;i<n;i++){
        x+=(a[i]*x+1);
    }
    cout<<x<<endl;
}