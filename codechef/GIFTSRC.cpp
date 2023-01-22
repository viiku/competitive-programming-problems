#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int  main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        string str;cin>>str;
        int x=0,y=0;
        vector<char>v1;
        for(int i=0;i<str.size();i++){
            if(str[i]=='L'){
                x-=1;
                y=y;
                if
            }else if(str[i]=='R'){
                x+=1;
                y=y;
            }else if(str[i]=='U'){
                x=x;
                y+=1;
            }else if(str[i]=='D'){
                x=x;
                y-=1;
            }
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}