#include<bits/stdc++.h>
using namespace std;
bool isvowel(char ch){
    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}
int main(){
    int t;string str;cin>>t;while(t--){
        cin.ignore();
        cin>>str;
        vector<char>v(1e5+1);
        for(int i=0;i<str.size();i++){
            if(isvowel(str[i])){
                v[i]=str[i];
            }
        }
        for(auto it:v){
            cout<<it<<" ";
        }
    }
}