#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        int x=0,y=0,z=0,a=0,b=0,c=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
                x++;
            }else if(str[i]==')'){
                y++;
            }else if(str[i]=='{'){
                z++;
            }else if(str[i]=='}'){
                a++;
            }else if(str[i]=='['){
                b++;
            }else if(str[i]==']'){
                c++;
            }
        }
        cout<<2*min(x,y)+2*min(z,a)+2*min(b,c)<<"\n";
    }
    return 0;
}