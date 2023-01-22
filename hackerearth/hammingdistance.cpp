#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1,s2;cin>>s>>s1>>s2;
    int a=stoi(s);
    int b=stoi(s1);
    int c=stoi(s2);
    cout<<__builtin_popcount(a^b);
    cout<<"\n"<<__builtin_popcount(a^c);

}