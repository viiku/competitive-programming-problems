#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  string str,str1;cin>>str>>str1;
  int cnt=0;
  for(int i=0;i<n-1;i++){
     if(str1[i]=='1' && str[i]=='0'){
        str[i]='2';
     }else{
        if(str1[i]=='1' && str[i]=='1'){
            if(str[i+1]=='0'){
                
            }
        }
     }
  }
}
