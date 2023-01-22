#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string ,int>mp;
	string str,str1;
	int n,mx=0;cin>>n;while(n--){
		cin>>str;
		mp[str]++;
		if(mp[str]>mx){
			mx=max(mp[str],mx);
			str1=str;
		}
	}
	cout<<str1<<"\n";
	return 0;
}