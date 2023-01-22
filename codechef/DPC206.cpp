#include<bits/stdc++.h>
using namespace std;
int ispalindrome(int n){
    string str=to_string(n);
    int j=str.size()-1;
    bool ok=true;
    for(int i=0;i<str.size();i++){
        if(str[i]!=str[j] && i<=j){
            ok=false;
        }
    }
    if(!ok)
        return false;
    return true;
}
int reverse(int n){
    int reverse_num=0;
    while(n>0){
        reverse_num=reverse_num*10+n%10;
        n/=10;
    }
    return reverse_num;
}
int main(){
    int n;cin>>n;
    int k=reverse(n);
    while(1){
        if(ispalindrome(n+k)){
        }
    } 
}