#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        int n=(int)str.size();
        if(str.empty()){
            cout<<"Success\n";
        }else{
            if(str[0]=='<' && str[1]=='/' && str[n-1]=='>'){
                bool ok=true;
                for(int i=0;i<n;i++){
                    if((str[i]>='a' && str[i]<='z') || 
                       (str[i]>='0' && str[i]<='9') || 
                       (str[i]=='<' || str[i]=='/' || str[i]=='>')){
                        ok=true;
                    }else{
                        ok=false;
                        break;
                    }
                }
                if(!ok){
                    cout<<"Success\n";
                }else{
                    cout<<"Error\n";
                }
            }else{
                cout<<"Error\n";
            }
        }
    }
}