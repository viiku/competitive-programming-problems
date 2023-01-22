
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define ld long double
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,n,a) for(ll i=n-1;i>=a;i--)
#define rep1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define pi 3.1415926535897932384626433832795
#define pqi  priority_queue<int>
#define umpii unordered_map<int,int>
#define mp(x,y) make_pair(x,y)
#define vii  vector<int>
#define pii  pair<int,int>
#define pll pair<ll,ll>
#define mpii map<int,int>
#define vll vector<ll>
#define mpll map<ll,ll>
#define vpi  vector<pair<int,int>>
#define umpll unordered_map<ll,ll>
#define pb push_back
#define eb emplace_back
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
//char to integer (char-'0')
//Integer to char (char+'0')
#include <bits/stdc++.h>

using namespace std;

void sieve(int L, int R)
{
	int i, j, d;

	d = R-L+1;		//from range L to R, we have d=R-L+1 numbers.
	
	bool flag[d]; 	//use flag[i] to mark whether (L+i) is a prime number or not.

	/* default: mark all to be true */
	for (i = 0; i < d; i++)
		flag[i] = true;

	/* mark even numbers as false */
	for (i = (L%2!=0); i<d; i+=2)
		flag[i] = false;

	/* sieve by prime factors staring from 3 till sqrt(U) */
	for (i = 3; i <= sqrt(R); i+=2)
	{
		if (i > L && !flag[i-L]) continue;

		/* choose the first number to be sieved -- >= L,
		divisible by i, and not i itself! */

		j = L/i*i;

		if (j < L)  j+=i;
		if (j == i) j+=i; 	//if j is a prime number, have to start form next one

		//now start sieving

		j -= L; // change j to the index representing j

		for (; j < d; j+=i)
			flag[j]=false;
	}

	//mark 1 as false, 2 as true
	if (L <= 1) flag[1-L] = false;
	if (L <= 2) flag[2-L] = true;

	//output the result
	for (i = 0; i < d; i++)
		if (flag[i])
			cout << (L+i) << " ";
}
int m,n;
void read(){
    cin>>m>>n;
    sieve(m,n);
}
int main(){
    IOS;
    test{
        read();
        cout<<"\n";
    }
}
