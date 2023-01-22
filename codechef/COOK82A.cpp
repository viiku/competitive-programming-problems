#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,p,q,r,s;string str;cin>>t;int k=4*t;while(k--){
        cin>>str>>n;
        if(str=="RealMadrid"){
            p=n;
        }else if(str=="Malaga"){
            q=n;
        }else if(str=="Barcelona"){
            r=n;
        }else if(str=="Eibar"){
            s=n;
        }
    
    if(p>=q && k%4==0){
        cout<<"RealMadrid\n";
    }else if(p<q && r>s && k%4==0){
        cout<<"Barcelona\n";
    }else{
        cout<<"RealMadrid\n";
    }
    }
    return 0;
}