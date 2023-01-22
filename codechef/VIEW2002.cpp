#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
    int x,y,x1,y1;cin>>x>>y>>x1>>y1;
    if(abs(x)+abs(y)>abs(x1)+abs(y1)){
        cout<<"B IS CLOSER\n";
    }else{
        cout<<"A IS CLOSER\n";
    }
    }
    return 0;
}