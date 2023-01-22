#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int n=str.size();
    int p=0;
    for(int i=0;i<=(n-1)/2;i++){
        int j=n;
        if(i<j){
            if(str[i]!=str[j]){
               p++;
            }
        }
        j--;
    }
    if(p!=0){
        cout<<"NIE"<<"\n";
    }else{
        cout<<"TAK"<<"\n";
    }
    return 0;
}