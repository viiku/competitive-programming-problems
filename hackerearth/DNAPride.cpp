#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        vector<char>v;
        int n;cin>>n;
        string str;cin>>str;
        int p=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='A'){
                v.emplace_back('T');
            }else if(str[i]=='T'){
                v.emplace_back('A');
            }else if(str[i]=='G'){
                v.emplace_back('C');
            }else if(str[i]=='C'){
                v.emplace_back('G');
            }else{
                p++;
            }
        }
        if(p!=0){
            cout<<"Error RNA nucleobases found!"<<"\n";
        }else{
            for(auto it:v){
                cout<<it;
            }
        }
    }
    return 0;
}