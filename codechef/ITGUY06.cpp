#include<bits/stdc++.h>
using namespace std;
void CheckDivide(string str){
    for(int i=0;i<str.size();i++){
        if((str[i]-'0')%5==0){
            cout<<"1\n";
            return ;
        }
    }
    cout<<"0\n";
}
int main(){
    std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t;cin>>t;while(t--){
        string str;cin>>str;
        CheckDivide(str);
    }
    return 0;
}