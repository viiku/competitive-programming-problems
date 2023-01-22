#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str){
    int i=0,p=0,j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            p++;
        }
        i++;
        j--;
    }
    if(p!=0)
        return false;
    return true;
}
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        string str=to_string(n);
        if(checkPalindrome(str)){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}