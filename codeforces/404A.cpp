#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    char c[n][n];
    char x;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cin>>x;
            c[j][i]=x;
        }
    }
    set<char>s,s1;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(i==j || (i+j)==n-1){
                s.insert(c[j][i]);
            }else{
                s1.insert(c[j][i]);
            }
        }
    }
    if(s.size()>1 || s1.size()>1){
        cout<<"NO\n";
    }else{
        auto it=s.begin();
        auto it1=s1.begin();
       if(*it!=*it1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}