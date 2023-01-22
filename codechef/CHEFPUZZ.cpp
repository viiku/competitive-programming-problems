#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;string s1,s2;cin>>t;while(t--){
        cin>>s1>>s2>>n;
        int sum1=0,sum2=0;
        for(int i=0;i<(int)s1.size();i++){
            sum1+=s1[i];
        }
        for(int i=0;i<(int)s2.size();i++){
            sum2+=s2[i];
        }
        bool ok=true;
        for(int i=0;i<(int)s1.size();i++){
            if(abs((s1[i])-(s2[i]))>n){
                ok=false;
            }
        }
        for(int i=0;i<(int)s2.size();i++){
            if(abs((s2[i])-(s1[i]))>n){
                ok=false;
            }
        }
        if((sum1==sum2) && ok){
            cout<<"WIN\n";
        }else{
            cout<<"LOSE\n";
        }         
    }
}