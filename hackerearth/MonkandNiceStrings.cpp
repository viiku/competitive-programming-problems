#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string str;cin>>n;
    vector<string>v;
    while(n--){
        cin>>str;
        v.push_back(str);
    }
    for(int i=0;i<(int)v.size();i++){
        int cnt=0;
        for(int j=0;j<i;j++){
            if(v[j]<v[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}