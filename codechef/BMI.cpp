#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m,h;cin>>t;while(t--){
        cin>>m>>h;
        int k=m/(h*h);
        if(k<=18){
            cout<<"1\n";
        }else if(k>=19 && k<=24){
            cout<<"2\n";
        }else if(k>=25 && k<=29){
            cout<<"3\n";
        }else if(k>=30){
            cout<<"4\n";
        }
    }
}