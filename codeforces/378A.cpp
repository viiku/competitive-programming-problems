#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    if(a==b){
        cout<<a-b<<" "<<6<<" "<<a-b<<endl;
    }else if(a<b){
        if((b-a)%2==0){
            
        }
    }else if(b<a){
        cout<<b-1+1<<" "<<a-b-1<<" "<<6-a+1<<endl;   
    }
}