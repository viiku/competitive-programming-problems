#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string str;cin>>n>>str;
    int p=0,q=0,r=0,s=0,cnt=0;
    for(int i=0;i<n;i++){
        if(str[i]>=65 && str[i]<=90){
            if(p<1){
                p++;
            }
        }else if(str[i]>=97 && str[i]<=122){
            if(q<1){
                q++;
            }
        }else if(str[i]>=48 && str[i]<=57){
            if(r<1){
                r++;
            }
        }else if(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' || str[i]=='*' || str[i]=='(' || str[i]==')' || str[i]=='-' || str[i]=='+'){
            if(s<1){
                s++;
            }
        }
    }
    int k=4-(p+q+r+s);
    if(n<6){
        if((n+k)>=6){
            cout<<n+k<<"\n";
        }else{
            cout<<n-(p+q+r+s)+k<<"\n";
        }
    }else{
        cout<<k<<"\n";
    }
    
    return 0;
}