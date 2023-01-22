#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>vec;
    int n;cin>>n;while(n--){
        int x,y;cin>>x>>y;
        vec[x].push_back(y);
//        vec[y].push_back(x);
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i][j];j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }
}