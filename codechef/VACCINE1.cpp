#include<bits/stdc++.h>
using namespace std;
int main(){
    int d1,v1,d2,v2,p;cin>>d1>>v1>>d2>>v2>>p;
    if(d1==d2){
        if(p%(v1+v2)==0){
            cout<<(p/(v1+v2))+min(d1,d2)-1<<"\n";
        }else{
            cout<<(p/(v1+v2))+min(d1,d2)<<"\n";
        }
    }else if(d1>d2){
        int q;
        q=(d1-d2)*v2;
        if(p>q){
            if((p-q)%(v1+v2)==0){
                cout<<(d1-d2)+(p-q)/(v1+v2)+min(d1,d2)-1<<"\n";
            }else{
                cout<<(d1-d2)+(p-q)/(v1+v2)+min(d1,d2)<<"\n";
            }
        }else if(p<=q){
            if(p%v2==0){
                cout<<d2-1+p/v2<<"\n";
            }else{
                cout<<d2+p/v2<<"\n";
            }
        }
    }else{
        int q;
        q=(d2-d1)*v1;
        if(p>q){
            if((p-q)%(v1+v2)==0){
                cout<<(d2-d1)+(p-q)/(v1+v2)+min(d1,d2)-1<<"\n";
            }else{
                cout<<(d2-d1)+(p-q)/(v1+v2)+min(d1,d2)<<"\n";
            }
        }else{
            if(p%v1==0){
                cout<<d1+(p/v1)-1<<"\n";
            }else{
                cout<<d1+p/v1<<"\n";
            }
        }
    }
    return 0;
}