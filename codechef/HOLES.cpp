#include<bits/stdc++.h>
using namespace std;
vector<pair<char,int>>v;
int main(){
    int t;string str;cin>>t;
    v={{'A',1},{'B',2},{'D',1},{'O',1},{'P',1},{'Q',1},{'R',1}};
    while(t--){
        cin>>str;
        int sum=0;
        for(int i=0;i<str.size();i++){
            for(int j=0;j<v.size();j++){
                if(str[i]==v[j].first){
                    sum+=v[j].second;
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}