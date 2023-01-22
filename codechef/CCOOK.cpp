#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,a,b,c,d,e;cin>>n;while(n--){
        cin>>a>>b>>c>>d>>e;
        sum=(a+b+c+d+e);
        if(sum==0){
            cout<<"Beginner\n";
        }else if(sum==1){
            cout<<"Junior Developer\n";
        }else if(sum==2){
            cout<<"Middle Developer\n";
        }else if(sum==3){
            cout<<"Senior Developer\n";
        }else if(sum==4){
            cout<<"Hacker\n";
        }else{
            cout<<"Jeff Dean\n";
        }
    }
    return 0;
}