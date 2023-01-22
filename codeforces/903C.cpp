#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	string str;
	map<string,int>mp;
	int n;cin>>n;while(n--){
	    getline(cin,str);
	    for(int i=0;i<str.size();i++){
	        mp[str[i]]++;
	        cout<<str[i]<<mp[str]<<"\n";
	    }
	}
	return 0;
}