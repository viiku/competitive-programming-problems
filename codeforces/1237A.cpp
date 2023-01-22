#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,p=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%2!=0){
            p++;
        }
    }
    int q=1;
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            cout<<a[i]/2<<"\n";
        }else if(q<=p){
            if(q%2!=0){
                cout<<(a[i]+1)/2<<"\n";
            }else{
                cout<<(a[i]-1)/2<<"\n";
            }
            q++;
        }
    }
    return 0;
}