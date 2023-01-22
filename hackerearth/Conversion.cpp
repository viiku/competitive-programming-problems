#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin.ignore();
        getline(cin,str);
        vector<pair<pair<char,char>,int>>v;
        for(int i=0;i<26;i++){
            v.emplace_back(make_pair(make_pair('a'+i-0,'A'+i-0),i+1));
        }
        v.resize(27);
        for(int i=0;i<(int)str.size();i++){
            if(str[i]!=' '){
                for(int j=0;j<(int)v.size();j++){
                    if(str[i]==v[j].first.first || str[i]==v[j].first.second){
                        cout<<v[j].second;
                    }
                }
            }else{
                cout<<'$';
            }
        }
        cout<<"\n";
    }
    return 0;
}
//TODO