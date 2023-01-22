#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    b=a;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            a[i]=a[i]-b[i];
        }
        for(int k:a){
            cout<<k<<" ";
        }
        cout<<"\n";
    }
}