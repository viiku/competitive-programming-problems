
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
int main(){
    IOS;
/*    test{
        int n;
        cin>>n;
        int a[n];
        REP(i,n){
           cin>>a[i];
        }
    }
*/  
//  A Naive solution of pattern matching    
    string str,str1;
    cin>>str>>str1;
    for(int i=0;i<=str.size()-str1.size();i++){
        int j;
        for(j=0;j<str1.size();j++){
            if(str[i+j]!=str1[j]){
                break;
            }
        }
        if(j==str1.size()){
            cout<<i<<"\n";
        }
//  If two strings are equal then their hashes has to be equal
//  But this is not true in reverse. I
//  If hashes are not equal then it is not
//  necessary that strings should be equal
/*  The reason why the opposite direction doesn't have to hold,
    if because there are exponential many strings.
    If we only want this hash function to distinguish between all strings 
    consisting of lowercase characters of length smaller than 15,
    then already the hash wouldn't fit into a 64-bit integer (e.g. unsigned long long) any more, 
    because there are so many of them. And of course, we don't want to compare arbitrary long integers, 
    because this will also have the complexity O(n). 
    */
                
    }
re;
}
