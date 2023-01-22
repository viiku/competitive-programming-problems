#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int i=1;
        while(n>0){
            n-=i;
            if(n<=2*i && n!=0){
                cout<<"Motu\n";
                break;
            }else if(n==0){
                cout<<"Patlu\n";
                break;
            }
            n-=2*i;
            if(n<=i && n!=0){
                cout<<"Patlu\n";
                break;
            }else if(n==0){
                cout<<"Motu\n";
                break;
            }
            i++;
        }
}