#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string str;cin>>n;while(n--){
        cin>>str;
        for(int i=str.size()-1;i>=0;i--){
            cout<<str[i];
        }
        cout<<"\n";
    }
}