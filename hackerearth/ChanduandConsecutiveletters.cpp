#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin.ignore();
        cin>>str;
        int i=0;
        int j=i+1;
        while(true){
            if(str[i]!=str[j]){
                i++;
                j++;
            }else if(str[i]==str[j]){
                str.erase(j);
            }
        }
        cout<<str;
    }
}