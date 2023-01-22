#include<bits/stdc++.h>
using namespace std;
int n,score;
string palyername;
vector<pair<int,string>>v(n);
const pair<int,int>a;const pair<int,int>b;
bool comp(){
    if(v[a.first]==v[b.first]){
        if(v[a.second]>v[b.second]){
            return true;
        }
    }
    return false;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>palyername>>score;
        v[i]={score,palyername};
    }
    sort(v.begin(),v.end(),comp);
}