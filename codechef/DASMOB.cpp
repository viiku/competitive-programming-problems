#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        if((int)str.size()<4){
            cout<<0<<endl;
        }else{
            bool ok=true,ok1=true,ok2=true;
            for(int i=0;i<(int)str.size();i++){
                if(str[i]>='0' && str[i]<='9'){
                    ok=false;
                }else if(str[i]>='A' && str[i]<='Z'){
                    ok1=false;
                }else if(str[i]==' ' || str[i]=='/'){
                    ok2=false;
                }
            }
            if(!ok && !ok1 && ok2){
                if(str[0]<='0' && str[0]>='9'){
                    cout<<1<<endl;
                }else{
                    cout<<0<<endl;
                }
            }else{
                cout<<0<<endl;
            }
        }
    }
}