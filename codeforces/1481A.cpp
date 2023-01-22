#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,px,py;string str;cin>>t;while(t--){
        cin>>px>>py>>str;
        int x=0,y=0,X=0,Y=0;
        bool ok=true,ok1=true;
        for(int i=0;i<(int)str.size();i++){
            if(str[i]=='U'){
                y++;
            }else if(str[i]=='D'){
                Y--; 
            }else if(str[i]=='R'){
                x++;
            }else if(str[i]=='L'){
                X--;
            }
        }
        if((y==py || Y==py) && (x==px || X==px)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}