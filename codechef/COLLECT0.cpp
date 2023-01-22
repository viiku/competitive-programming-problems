#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;cin>>t;while(t--){
        cin>>a>>b;
        float f1=(float)a/500;
        float f2=(float)b/500;
        // cout<<f1<<" "<<f2<<endl;
        if(f1>f2){
            cout<<"A\n";
        }else{
            cout<<"B\n";
        }
    }
}