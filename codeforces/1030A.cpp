#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0,q=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            p++;
        }else if(a[i]==1){
            q++;
        }
    }
    if(q==0){
        cout<<"EASY"<<"\n";
    }else{
        cout<<"HARD"<<"\n";
    }
}