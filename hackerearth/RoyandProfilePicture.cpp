#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,n,w,h;cin>>l>>n;while(n--){
        cin>>w>>h;
        if(l==w && l==h){
            cout<<"ACCEPTED\n";
        }else if(l>w || l>h){
            cout<<"UPLOAD ANOTHER\n";
        }else if(l<=w && l<=h){
            if(w==h){
                cout<<"ACCEPTED\n";
            }else{
                cout<<"CROP IT\n";
            }
        }
    }
}