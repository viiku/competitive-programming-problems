#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    vector<int>v{1,2,3};
    string str;cin>>str;
    for(int i=0;i<(int)str.size();i++){
        if(str[i]=='A'){
            swap(v[0],v[1]);
        }else if(str[i]=='B'){
            swap(v[1],v[2]);
        }else if(str[i]=='C'){
            swap(v[0],v[2]);
        }
    }
    for(int i=0;i<3;i++){
        if(v[i]==1){
            cout<<i+1<<endl;
            break;
        }
    }
}