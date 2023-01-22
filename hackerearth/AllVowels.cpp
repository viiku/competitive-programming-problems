#include<bits/stdc++.h>
using namespace std;
bool isvowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}
int main(){
    set<char>s;
    int n;string str;cin>>n>>str;
    for(int i=0;i<str.size();i++){
        if(isvowel(str[i])){
            s.insert(str[i]);
        }
    }
    if(s.size()==5){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}