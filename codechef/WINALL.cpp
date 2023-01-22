#include<bits/stdc++.h>
using namespace std;
bool iseven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        if(n==1){
            cout<<"Grinch\n";
        }else if(n==2){
            cout<<"Me\n";
        }else if(n%2!=0 && n>1){
            cout<<"Me\n";
        }else if(n%2==0 && n>2){
            for(int i=2;i*i<=n;i++){
                if(n%i==0 && iseven(i)){
                    cout<<"Me\n";
                    break;
                }else if(n%i==0 && !iseven(i)){
                    cout<<"Grinch\n";
                    break;
                }
            }
        }
    }
    return 0;
}