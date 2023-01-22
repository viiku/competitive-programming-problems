#include<bits/stdc++.h>
using namespace std;
int CountH(string str,int n){
    for(int i=0;i<str.size()-1;i++){
        if(str[i]==1){
            if(i!=0 || i!=(n-1)){
                str[i-1]=1;
                str[i]=1;
                str[i+1]=1;
            }else if(i==0){
                str[i+1]=1;
            }else if(i==(n-1)){
                str[i-1]=1;
            }
        }
    }
    return count(str.begin(),str.end(),0);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        n=str.size();
        if(n==1){
            if(str[0]==1){
                cout<<0<<"\n";
            }else{
                cout<<1<<"\n";
            }
        }else if(n==2){
            if(str[0]==1 || str[1]==1){
                cout<<0<<"\n";
            }else{
                cout<<2<<"\n";
            }
        }else if(n>=3){
            cout<<CountH(str,n)<<"\n";
        }
    }
    return 0;
}