#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;cin>>n;
    if(n>=-127 && n<=127){
        cout<<"byte\n";
    }else if((n<-127 && n>127) && (n>=-32768 && n<=32767)){
        cout<<"shrot\n";
    }else if((n<-127 && n>127) && (n<-32768 && n>32767) && (n>=-2147483648 && n<=2147483647)){
        cout<<"int\n";
    }else if(n<-127 && n>127) && (n<-32768 && n>32767) && (n<-2147483648 && n>2147483647) 
}