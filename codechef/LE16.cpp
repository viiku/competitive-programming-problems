#include<bits/stdc++.h>
using namespace std;
// Using Linear Search
int CommonEle(int ar[],int br[],int n){
    int i=1,j=1,p=0;
    while(i<=n && j<=n){
        if(ar[i]<br[j]){
            i++;
        }else if(ar[i]>br[j]){
            j++;
        }else if(ar[i]==br[j]){
            p=ar[i];
            break;
        }
    }
    return p;
}
int  main(){
    int n;
    cin>>n;
    int ar[n],br[n];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    for(int j=1;j<=n;j++){
        cin>>br[j];
    }
    cout<<CommonEle(ar,br,n);
    return 0;
}