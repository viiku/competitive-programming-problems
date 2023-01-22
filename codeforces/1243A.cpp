#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		int mn=1e4,k=0;
		for(int i=0;i<n;i++){
			mn=min(mn,a[i]);
			k++;
		}
