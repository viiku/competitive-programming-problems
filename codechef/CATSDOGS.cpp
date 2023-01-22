#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int c,d,l;cin>>c>>d>>l;
        if(l%4!=0){
            cout<<"no\n";
        }else{
            if(l>4*(c+d)){
                cout<<"no\n";
            }else if(l==4*(c+d)){
                cout<<"yes\n";
            }else if(l<4*(c+d)){
                int p=l/4;
                if(2*d==c){
                    cout<<
                }
            }
        }
    }
    return 0;
}