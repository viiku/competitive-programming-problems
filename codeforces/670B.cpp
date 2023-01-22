#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,k;
    cin>>n>>k;
    int v1[n];
    vector<int>v2;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
/*    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            v2.emplace_back(v1[j]);
        }
    }*/
    for(int i=1;i<=n;i++){
        if(k-i>0){
            k-=i;
        }else{
            cout<<v1[k-1]<<"\n";
            break;
        }
    }
//    cout<<v2[k-1]<<"\n";
    return 0;
}