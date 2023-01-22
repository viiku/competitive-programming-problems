#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],cnt=0;
    for(int i=0;i<7;i++){
        cin>>a[i];
        if(n>=0){
            n-=a[i];
            cnt++;
        }
    }
    int p=cnt%7;
    cout<<cnt<<" "<<p<<"\n";
/*    if(p==0){
        cout<<"Sunday"<<"\n";
    }else if(p==1){
        cout<<"Monday"<<"\n";
    }else if(p==2){
        cout<<"Tuesday"<<"\n";
    }else if(p==3){
        cout<<"Wednesday"<<"\n";
    }else if(p==4){
        cout<<"Thursday"<<"\n";
    }else if(p==5){
        cout<<"Friday"<<"\n";
    }else if(p==6){
        cout<<"Saturday"<<"\n";
    }*/
    return 0;
}