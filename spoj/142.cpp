#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string text,pattern;cin>>n>>pattern>>text;
    int p=n;
    int t=(int)text.size();
    int cnt=0;
    if(t>=p){
        for(int i=0,r=p-1;r<t;r++,i++){
            bool ok=true;
            for(int j=0;j<p;j++){
                if(text[i+j]!=pattern[j]){
                    ok=false;
                }
            }
            if(ok){
                cout<<i<<"\n";
            }
        }
    }else{
        cout<<" "<<"\n"<<" "<<"\n";
    }
        // cout<<cnt<<endl;
}