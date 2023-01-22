#include<bits/stdc++.h>
using namespace std;
bool isvowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}
int main(){
    int n,cnt=0;string str;cin>>n>>str;
    for(int i=0;i<n-1;i++){
        if(isvowel(str[i]) && isvowel(str[i+1])){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}