#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REPJ(j,n) for(int j=0;j<n;j++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define REPJ1(j,n) for(int j=1;j<=n;j++)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back()
int main()
{
	IOS;
	test{
		ll a,b;
		cin>>a>>b;
/*		int a[n];
		REP(i,n){
			cin>>a[i];
		}
        
We know that there are 10 digits possible i.e. from 0 to 9,
 As we want to create the number with the use of a minimum number of digits,
  we should use digit 9 as much possible which means for any power PP, 
  if we want to find out the number for which PP is the power with
   a minimum number of digits then all the digits are 9 except 1.
   If the PP is divisible by 9 then all the digits are 9 only.

Now to construct the number, we should use 9 as it is the highest possible digit. Hence we can say that:

1<=sum <=9 => at least 1 digit
10<=sum <=18=>10 at least 2 digit
19≤sum≤27 => at least 3 digit
and so on.
Hence by dividing the (final power + 8) from 9, 
will tell the minimum number of digits that can be needed to form the final power. 
By this, we can easily answer the question.
*/
        a += 8;
        a /= 9;
        b += 8;
        b /= 9;
 
        cout << (a >= b) << " " << min(a,b) << endl;
	}

	re;
}
