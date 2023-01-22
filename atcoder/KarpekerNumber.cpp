#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,rev;int k;cin>>str>>k;
    rev=str;
    while(k>=1){
        sort(str.begin(),str.end());
        sort(rev.rbegin(),rev.rend());
        k--;
    }
    cout<<stoi(rev)-stoi(str);
}