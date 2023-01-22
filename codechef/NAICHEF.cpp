#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,p=0;string str;cin>>t;while(t--){
        cin>>n>>x>>str;
        set<int>s;
        s.insert(x);
        for(int i=0;i<str.size();i++){
            if(str[i]=='R'){
                x+=1;
            }else if(str[i]=='L'){
                x-=1;
            }
            s.insert(x);
        }
        cout<<s.size()<<"\n";
    }
    return 0;
}