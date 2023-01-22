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
//	test{
		ll n;
		cin>>n;
/*		int a[n];
		REP(i,n){
			cin>>a[i];
		}
        */
        //prime factors of given integer in o(n)
       int ct=0,pt=0;
        for(int i=2;i<=n;i++){
           if(n%i==0){
               ct=0;
                while(n%i==0){
                   n=n/i;
                   ct++;
               }
               cout<<i<<" "<<ct<<"\n";
           }
        } 
        
        //prime factorization of given integer in o(sqrt(n))  
       int pt=0;
        for(ll i=2;i<=sqrt(n);i++){
           if(n%i!=0){
               pt=0;
               while(n%i==0){
                   n=n/i;
                   pt++;
               }
               cout<<i<<" "<<pt<<"\n";
           }
        }
//    }
	re;
}
