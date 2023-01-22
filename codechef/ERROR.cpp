#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int q=0;
        for(int i=0;i<str.size()-2;i++){
            if((str[i]==0 && str[i+1]==1 && str[i+2]==0) || (str[i]==1 && str[i+1]==0 && str[i+2]==1)){
                q++;
            }
        }
        if(q!=0){
            cout<<q<<"Good"<<"\n";
        }else{
            cout<<q<<"Bad"<<"\n";
        }
    }
}