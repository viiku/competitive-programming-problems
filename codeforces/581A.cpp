#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int p=min(a,b);
	cout<<p<<" "<<(max(a,b)-min(a,b))/2<<"\n";
} 