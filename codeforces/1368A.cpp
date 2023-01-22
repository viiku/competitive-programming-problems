#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		long long a,b,n;
		cin >> a >> b >> n;
		int cnt = 0;
		while(max(a,b) <= n)  {
			if(a < b) a += b;
			else b += a;
			cnt += 1;
		}
		cout << cnt << endl;
	}
	
	return 0;
}