
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
#define pb(n) push_back(n)
#define PI 3.1415926535897932384626
#define MOD (long long int)1000000007
#define F first
#define S second
#define eb(n) emplace_back(n)
#define vll vector<ll>
#define v  vector<int>
int count4Divisibiles(int arr[], int n) 
{ 
    // Create a frequency array to count  
    // occurrences of all remainders when  
    // divided by 4 
    int freq[4] = {0, 0, 0, 0}; 
  
    // Count occurrences of all remainders 
    for (int i = 0; i < n; i++) 
        ++freq[arr[i] % 4]; 
  
    // If both pairs are divisible by '4' 
    int ans = freq[0] * (freq[0] - 1) / 2; 
  
    // If both pairs are 2 modulo 4 
    ans += freq[2] * (freq[2] - 1) / 2; 
  
    // If one of them is equal 
    // to 1 modulo 4 and the 
    // other is equal to 3  
    // modulo 4 
    ans += freq[1] * freq[3]; 
  
    return ans; 
} 
int main(){
    IOS;
    test{
        int n;
        cin>>n;
        int arr[n];
        REP(i,n){
           cin>>arr[i];
        }
        cout<<count4Divisibiles(arr,n)<<"\n";
    }
re;
}
