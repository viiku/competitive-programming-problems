#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0,q=0;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i]=='-'){
            p++;
        }else{
            q++;
        }
    }
    if(p==n){
        cout<<0<<"\n";
    }else if(q==n){
        cout<<n<<"\n";
    }else{
        for(int i=0;i<str.size();i++){
            if(i==0 && str[i]=='-'){
                
            }
        }
    }
    return 0;
}