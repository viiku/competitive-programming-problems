#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,p=0,q=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2!=0){
                cout<<"#";
            }else if(i%2==0){
                if(j==m && p>=q){
                    cout<<"#";
                    q++;
                }else if(j!=m){
                    cout<<".";
                }else if(j==1 && q>p){
                    cout<<"#";
                    p++;
                }else if(j!=1 && q>p){
                    cout<<".";
                    q++;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}