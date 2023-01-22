#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string chef,comp;cin>>t;while(t--){
        cin>>chef>>comp;
        if((int)comp.size()<(int)chef.size()){
            cout<<"NO\n";
        }else{
            int i=0,j=0,cnt=0;
            while(i<(int)chef.size() && j<(int)comp.size()){
                if(chef[i]==comp[j] && j<(int)comp.size()){
                    cnt++;
                    i++;
                    j++;
                }else{
                    j++;
                }
            }
            if(cnt==(int)chef.size()){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }  
        }
    }
    return 0;
}