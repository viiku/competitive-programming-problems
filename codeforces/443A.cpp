#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	set<char>s;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		if(str[i]>='a' && str[i]<='z'){
			s.insert(str[i]);
		}
	}
	cout<<s.size()<<"\n";
	return 0;
}