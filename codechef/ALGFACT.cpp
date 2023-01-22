#include<boost/multiprecision/cpp_int.hpp>
#include<iostream>
namespace mp = boost :: multiprecision;
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		mp :: cpp_int fac = 1;
		for(int i=2; i<=n; i++){
			fac *= i;
		}
		cout << fac << endl;
	}
	return 0;
}