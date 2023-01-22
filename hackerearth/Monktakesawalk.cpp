/* Date:02-04-2021 */
/* Time:08:18:18 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
bool vowels(char ch){
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}
int main(){
    IOS;
    int n;string str;cin>>n;while(n--){
        cin>>str;
        int cnt=0;
        for(int i=0;i<(int)str.size();i++){
            if(vowels(str[i])){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}