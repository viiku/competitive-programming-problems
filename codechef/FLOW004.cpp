#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;
		string str=to_string(n);
		cout<<str[0]-'0'+str[str.size()-1]-'0'<<"\n";
	}
	return 0;
}