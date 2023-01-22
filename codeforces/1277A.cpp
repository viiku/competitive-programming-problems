#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;
		//Tutorial
        int b = 0,ans = 0;
        for (int len = 1; len <= 9; len++) {
                b = b * 10 + 1;            
                for (int m = 1; m <= 9; m++)
                    if (b * m <= n)
                        ans++;
        }
        cout << ans << endl;
	}
}