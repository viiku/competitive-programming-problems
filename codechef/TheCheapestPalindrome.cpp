#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        string str;int as,bs;cin>>str>>as>>bs;
        int j=str.size()-1,cnt=0,p=0;
        for(int i=0;i<str.size();i++){
            if(i<j){
                if((str[i]=='a' && str[j]=='/') || (str[i]=='/' && str[j]=='a')){
                    cnt+=as;
                }else if((str[i]=='b' && str[j]=='/') || (str[i]=='/' && str[j]=='b')){
                    cnt+=bs;
                }else if((str[i]=='a' && str[j]=='b') || (str[i]=='a' && str[j]=='/')){
                    p++;
                }else if(str[i]=='/' && str[j]=='/'){
                    cnt+=2*(min(as,bs));
                }
            }
            j--;
        }
        if(p!=0){
            cout<<"-1"<<"\n";
        }else{
            cout<<cnt<<"\n";
        }
    }
    return 0;
}