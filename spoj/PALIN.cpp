#include<bits/stdc++.h>
#define deb(x) cout<<#x<<x;
using namespace std;
bool ispalindrome(string str){
    int j=str.size()-1;
    for(int i=0;i<str.size();i++){
        if(str[i]!=str[j]){
            return false;
        }
        j--;
    }
    return true;
}
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        deb(str);
    }
}