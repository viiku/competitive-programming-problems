
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

/*
As for the question "When can we use binary search?",
my answer is that, If we can discover some kind of monotonicity,
for example, if condition(k) is True then condition(k + 1) is alsoTrue,
then we can consider binary search.
*/

//First odd element in a array
/*
You are a product manager and currently leading a team to develop a new product. 
Since each version is developed based on the previous version, 
all the versions after a bad version are also bad. 
Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, 
which causes all the following ones to be bad.
*/
//ll FirstBadVersion(){

//}



// Square Root of given integer
/*
Implement int sqrt(int x). Compute and return the square root of x,
where x is guaranteed to be a non-negative integer.
Since the return type is an integer, 
the decimal digits are truncated and only the integer part of the result is returned.
*/
int Sqrtx(int x){
    int l=0,h=x,mid,p=0;
    while(l<h){
        mid=l-(l-h)/2;
        if(mid*mid==x){
            return mid;
            break;
        }else if(mid*mid>x){
            h=mid-1;
        }else if(mid*mid<x){
            l=mid+1;
        }
    }
}



// Search Insert position
/*
Given a sorted array and a target value,
return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
You may assume no duplicates in the array.
*/
int SearchInsert(int x,int a[],int n){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid=l-(l-h)/2;
        if(a[mid]==x){
                return mid;
        }else if(a[mid]>x){
            if(a[mid-1]<x){
                return mid;
            }else{
                h=mid-1;
            }
        }else if(a[mid]<x){
            if(a[mid+1]>x){
                return mid+1;
            }else{
                l=mid+1;
            }
        }
    }
}


//Capacity to Ship Packages Within D Days
/*
A conveyor belt has packages that must be shipped from one port to another within D days. 
The i-th package on the conveyor belt has a weight of weights[i].
Each day, we load the ship with packages on the conveyor belt (in the order given by weights). 
We may not load more weight than the maximum weight capacity of the ship.
*/


// 410. Split Array Largest Sum [Hard]
/*
Given an array which consists of non-negative integers and an integer m,
you can split the array into m non-empty continuous subarrays.
Write an algorithm to minimize the largest sum among these m subarrays.

Example:

Input:
nums = [7,2,5,10,8]
m = 2

Output:
18

Explanation:
There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], 
where the largest sum among the two subarrays is only 18.
*/

int main(){
    IOS;
//    test{
        int n,x;
        cin>>n>>x;
        int a[n];
        REP(i,n){
           cin>>a[i];
        }
//      Sqrtx(x);
        SearchInsert(x,a,n); 
//    }
re;
}
