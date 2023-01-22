#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0,p,count=0;
	for(int i=0;i<n;i++){
		p=0;
		while(a[i]!=0){
			a[i]%=10;
			if(a[i]%10==4 || a[i]%10==7){
				p++;
			}
			a[i]/=10;
		}
		if(p>k){
			count++;
		}
	}
	cout<<count<<"\n";
	return 0;
}