#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],p=0,m=0,pe=0;
    vector<int>v,v1,v2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            v.push_back(i+1);
            p++;
        }else if(a[i]==2){
            v1.push_back(i+1);
            m++;
        }else if(a[i]==3){
            v2.push_back(i+1);
            pe++;
        }
    }
    int mn=min({p,m,pe});
    cout<<mn<<endl;
    for(int i=0;i<mn;i++){
        cout<<v[i]<<" "<<v1[i]<<" "<<v2[i]<<endl;
    }
}