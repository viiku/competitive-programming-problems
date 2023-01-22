#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    return false;
}
int main(){
    string str,str1;cin>>str>>str1;
    if(str.size()!=str1.size()){
        cout<<"No"<<"\n";
    }else{
        int p=0;
        for(int i=0;i<str.size();i++){
            if((isVowel(str[i]) && isVowel(str1[i])) || (!isVowel(str[i] )&& !isVowel(str1[i]))){
                continue;
            }else{
                p++;
            }
            
        }
        if(p!=0){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
    return 0;
}