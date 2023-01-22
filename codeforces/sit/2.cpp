#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        if((n+3)%3==0){
            int k=(n+3)/3;
            cout<<k-2<<" "<<k-1<<" "<<k<<endl;
        }else{
            cout<<"-1\n";
        }
    }
}