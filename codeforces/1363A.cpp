#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,p=0,q=0;
		cin>>n>>x;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]%2==0){
				p++;
			}else if(a[i]%2!=0){
				q++;
			}
		}
		
	}
}