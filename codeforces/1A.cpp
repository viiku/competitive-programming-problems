#include<bits/stdc++.h>
using namespace std;
using ld=long double;
using ll=long long int; 
int main() {
//	CLOCKS_PER_SEC;
	clock_t t1=clock();
	ll n,m,a;
	cin>>n>>m>>a;
	t1=clock()-t1;
	cout<<((m+a-1)/a)*((n+a-1)/a)<<" "<<((float)t1)/(CLOCKS_PER_SEC)<<endl;
	return 0;
} 