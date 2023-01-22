#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str,str1,str2;cin>>t;while(t--){
        cin>>str;
        int m=str.size()/2;
        reverse(str.begin(),str.begin()+m);
        reverse(str.begin()+m,str.end());
        cout<<str<<"\n";
    }
    return 0;
}