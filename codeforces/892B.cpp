/* Date:25-03-2021 */
/* Time:22:31:19 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n;cin>>n;
    int l[n];
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    int i=0,j=0,cnt=0;
    while(i<n-1){
        if(j<i && j>=i-l[i]){
            cnt++;
            i++;
        }else{
            j++;
        }
    }
    cout<<n-cnt<<endl;
}