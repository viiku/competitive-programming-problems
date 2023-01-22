#include<bits/stdc++.h>
using namespace std;
int MinimalDiff(int ar[],int br[],int n){
    int mn=ar[1]-br[1];
    for(int i=1;i<=n;i++){
        if(ar[i]<br[i]){
            mn=min(mn,abs(ar[i]-br[i]));
        }else if(ar[i]>br[i]){
            mn=min(mn,abs(ar[i]-br[i]));
        }
    }
    return mn;
}
int main(){
    int n;
    cin>>n;
    int ar[n],br[n];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    for(int j=1;j<=n;j++){
        cin>>br[j];
    }
    cout<<MinimalDiff(ar,br,n)<<"\n";;
}