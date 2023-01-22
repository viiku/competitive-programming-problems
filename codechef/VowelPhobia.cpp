#include<bits/stdc++.h>
using namespace std;
int CountVowel(string str){
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int t;cin>>t;while(t--){
        string str;cin>>str;
        cout<<CountVowel(str)<<"\n";
    }
    return 0;
}