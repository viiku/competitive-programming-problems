/* Date:25-03-2021 */
/* Time:20:15:22 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n,k;string str;cin>>t;while(t--){
        cin>>n>>k>>str;
        if(str.size()>=k){
            int cnt=0;
            cnt+=2;
            for(int i=0;i<n-k;i++){
                if(str[i]=='*'){
                    for(int j=i+1;j<n;j++){
                        if(str[j]=='*'){
                            if((j-i+1)<=k){
                                break;
                            }else{
                                cnt++;
                                break;
                            }
                        }
                    }
                }
            }
            cout<<cnt<<endl;
        }else{
            
        }
}