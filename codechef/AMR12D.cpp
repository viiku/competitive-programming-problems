#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string str){
    int j=str.size()-1;
    for(int i=0;i<str.size();i++){
        if(str[i]!=str[j] && i<=j){
            return false;
        }
        j--;
    }
    return true;
}
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        if(is_palindrome(str)){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<"\n";
    }
}