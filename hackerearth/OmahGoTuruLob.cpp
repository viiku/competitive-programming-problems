#include<bits/stdc++.h>
using namespace std;
bool isvowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        return true;
    }
    return false;
}
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        set<char>s,s1;
        for(int i=0;i<(int)str.size();i++){
            if(islower(str[i]) && isvowel(str[i])){
                s.insert(str[i]);
            }else if(isupper(str[i]) && isvowel(str[i])){
                s1.insert(str[i]);
            }
        }
        if((int)s1.size()==5 || (int)s.size()==5){
            cout<<"lovely string\n";
        }else{
            cout<<"ugly string\n";
        }
    }
}