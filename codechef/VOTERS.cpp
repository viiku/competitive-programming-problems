#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    for(int i=0;i<n3;i++){
        cin>>c[i];
    }
    vector<int>v,v1;
    vector<int>:: iterator it,it1;
    it=set_intersection(a,a+n1,b,b+n2,v.begin());
    v.resize(it-v.begin());
    for(auto x:v){
        cout<<x<<" ";
    }  
//    it1=set_intersection(v.begin(),v.end(),c,c+n3,v1.begin());
//    v1.resize(it1-v1.begin());  
    return 0;
}