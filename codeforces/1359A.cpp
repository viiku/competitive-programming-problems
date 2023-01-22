#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;while(t--){
		int n,m,k;cin>>n>>m>>k;
		if(m==0){
			cout<<0<<"\n";
		}else{
			int p=n/k;
			if(p>=m){
				cout<<m<<"\n";
			}else{
				if(m>=2*p){
					cout<<0<<"\n";
				}else if(m>p && m<(2*p)){
					cout<<m-1<<"\n";
				}
			}
		}
	}
	return 0;
}