#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	map<int,int>mp;
    set<int>s;
	for(int i=0;i<n;i++){
		cin>>a[i];
        s.insert(a[i]);
		mp[a[i]]++;
	}
//	vector<int>:: iterator it;
	for(auto x:mp){
		cout<<x.first<<" "<<x.second<<"\n";
	}
    cout<<"\n";
    for(auto x:s){
        cout<<x<<" ";
    }
}
