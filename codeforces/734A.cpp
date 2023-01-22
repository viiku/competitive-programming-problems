#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,x=0,y=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            x++;
        }else if(str[i]=='D'){
            y++;
        }
    }
    if(x>y){
        cout<<"Anton"<<"\n";
    }else if(x<y){
        cout<<"Danik"<<"\n";
    }else if(x==y){
        cout<<"Friendship"<<"\n";
    }
    return 0;
}