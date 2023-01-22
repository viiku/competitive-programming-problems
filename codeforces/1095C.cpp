#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define ull unsigned long long int
#define ld long double
#define re return 0
void FindAllElements(int n, int k) 
{ 
	// Initialising the sum with k 
	int sum = k; 

	// Initialising an array A with k elements 
	// and filling all elements with 1 
	int A[k]; 
	fill(A, A + k, 1); 

	for (int i = k - 1; i >= 0; --i) { 

		// Iterating A[] from k-1 to 0 
		while (sum + A[i] <= n) { 

			// Update sum and A[i] 
			// till sum + A[i] is less than equal to n 
			sum += A[i]; 
			A[i] *= 2; 
		} 
	} 

	// Impossible to find the combination 
	 if(sum==n){
		cout<<"YES"<<"\n";
		for (int i = 0; i < k; ++i){
				cout << A[i] << ' '; 
		} 
	} 
} 
int main() 
{ 
	IOS;
	ll n,k;
	cin>>n>>k;
	FindAllElements(n, k); 
	re; 
} 

