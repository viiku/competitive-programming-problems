#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string str1;
    cin>>str1;
    reverse(str.begin(),str.end());
    if(str!=str1){
        cout<<"NO"<<"\n";
    }else{
        cout<<"YES"<<"\n";
    }
    return 0;
}