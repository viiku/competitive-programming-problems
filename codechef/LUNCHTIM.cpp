/* Date:27-03-2021 */
/* Time:20:38:22 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v;
        stack<int>left,right;
        for(int i=0;i<n;i++){
            int cnt=0,cnt1=0;
            while(!right.empty() && right.top()<=a[i]){
                if(right.top()==a[i]){
                    cnt++;
                }
                right.pop();
            }
            // while(!left.empty() && left .top()<=a[i]){
            //     if(left.top()==a[i]){
            //         cnt1++;
            //         left.pop();
            //     }
            // }
            right.push(a[i]);
            // left.push(a[i]);
            // v.push_back(cnt+cnt1);
        }
        // for(int i:v){
        //     cout<<i<<" ";
        // }
    }
}