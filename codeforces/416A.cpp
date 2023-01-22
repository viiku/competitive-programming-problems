#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y=0;string ch1,ch2;cin>>n;while(n--){
        cin>>ch1>>x>>ch2;
        if(ch1==">"){
            if(ch2=="Y"){
                y=x+1;
            }else if(ch2=="N"){
                y=x-1;
            }
        }else if(ch1=="<"){
            if(ch2=="Y"){
                y=x-1;
            }else if(ch2=="N"){
                y=x+1;
            }
        }else if(ch1==">="){
            if(ch2=="Y"){
                y=x;
            }else if(ch2=="N"){
                y=x-1;
            }
        }else if(ch1=="<="){
            if(ch2=="Y"){
                y=x;
            }else if(ch2=="N"){
                y=x-1;
            }
        }
        y=y;
    }
    cout<<y<<"\n";
    return 0;
}