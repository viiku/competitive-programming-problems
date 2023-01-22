#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string str;getline(cin,str);
        int cnt=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==' '){
                cnt++;
            }
        }
        cout<<cnt+1<<"\n";
    }
    return 0;
}