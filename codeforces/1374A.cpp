#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
	int t;cin>>t;while(t--){
		int x,y,n;cin>>x>>y>>n;
		ll q=n,p=n-y;
		if(q%x==y){
			cout<<q<<"\n";
		}else if(q%x!=y){
			if(q%x>y){
				cout<<q-((q%x)-y)<<"\n";
			}else{
				cout<<q-x+(y-q%x)<<"\n";
			}
		}
	}
	return 0;
}