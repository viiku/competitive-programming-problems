/* Date:25-03-2021 */
/* Time:23:05:38 */
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
    int i=0,j=n-1,sumA=a[0],sumB=a[n-1];
    while(i<j){
        if(sumA<=sumB){
            i++;
            sumA+=a[i];
        }else if(sumB<sumA){
            j--;
            sumB+=a[j];
        }
    }
    cout<<sumA<<" "<<sumB;
    // cout<<i<<" "<<j;
}