#include<bits/stdc++.h>
using namespace std;
void Check(string str){
    for(int i=0;i<str.size();i++){
        if((str[i]-'0')%2==0){
            cout<<"1\n";
            return ;
        }
    }
    cout<<"0\n";
}
int main(){
//    std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
    int t,n;string str;cin>>t;while(t--){
        cin>>str;
        Check(str);
    }
    return 0;
} 