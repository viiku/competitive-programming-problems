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
int main()
{
	IOS;
	test{
		int n,p=0,q=0;
		cin>>n;
/*		int a[n];
		REP(i,n){
			cin>>a[i];
		}
		*/
		char str[n];
		cin>>str;
        int i = 0, alphabet[26] = {0}, j;
        while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
           j = str[i] - 'a';
           ++alphabet[j];
           if(alphabet[j]%2==0){
       		p++;
		   }else{
		   	q++;
		   }
        }
        ++i;
       }
 //      for(int i=0;i<n;i++){
       	
//	   }
	   if(q!=0){
	   	cout<<"NO"<<"\n";
	   }else{
	   	cout<<"YES"<<"\n";
	   }
	}
	re;
}
