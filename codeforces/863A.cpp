#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string str=to_string(n);
    int k=0,p=0;
    bool ok=true;
    for(int i=0;i<str.size();i++){
        if(str[i]!='0' && ok){
            k=i;
            ok=false;
        }else if(str[i]!='0' && !ok){
            p=i;
        }
    }
    while(k<=p){
        if(str[k]!=str[p]){
            cout<<"NO\n";
            return 0;
        }
        k++;
        p--;
    }
    cout<<"YES\n";
}