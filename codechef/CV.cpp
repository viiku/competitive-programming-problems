#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    return false;
}
int main(){
    int t;cin>>t;while(t--){
        int n,p=0;string str;cin>>n>>str;
        for(int i=0;i<str.size()-1;i++){
            if(!isVowel(str[i]) && isVowel(str[i+1])){
                p++;
            }
        }
        cout<<p<<"\n";
    }
    return 0;
}
