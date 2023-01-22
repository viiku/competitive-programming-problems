#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,cnt=0;string str,result="";
        long long int p=1,k=0;
        cin>>n>>str;
        for(int i=n-1;i>=0;i--){
            k+=p*(str[i]-'0');
            p*=2;
            cnt++;
            if(cnt==4){
                char ch=(char)(97+k);
                result.push_back(ch);
                cnt=0;
                p=1;
                k=0;
            }
        }
        reverse(result.begin(),result.end());
        cout<<result<<"\n";
    }
    return 0;
}