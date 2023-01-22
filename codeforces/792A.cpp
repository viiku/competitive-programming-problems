/*12-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	IOS;
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	map<int,int>mp;
	for(int i=0;i<n-1;i++){
		mp[abs(a[i]-a[i+1])]++;
	}
	for(auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
		break;
	}
}