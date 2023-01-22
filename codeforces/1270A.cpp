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
		int n,k1,k2,p=0,q=0;
		cin>>n>>k1>>k2;
		int a[k1],b[k2];
        queue<int>s1,s2;
		REP(i,k1){
			cin>>a[i];
            s1.push(a[i]);
		}
        REP(i,k2){
            cin>>b[i];
            s2.push(b[i]);
        }
/*        while(!s1.empty()){
            cout<<s1.front()<<" ";
            s1.pop();
        }
        while(!s2.empty()){
            cout<<s2.front()<<" ";
            s2.pop();
        }
        */
        int sum=0,sum1=0;
        p=min(k1,k2);
        if(p==k1){
            while(!s1.empty()){
                sum+=s1.front();
                s1.pop();
                sum1+=s2.front();
                s2.pop();

            }
            if(sum>sum1){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }else if(p==k2){
            while(!s2.empty()){
                sum+=s2.front();
                s2.pop();
                sum1+=s1.front();
                s1.pop();
            }
            if(sum>sum1){
                cout<<"NO"<<"\n";
            }else{
                cout<<"YES"<<"\n";
            }
        }else if(k1==k2){
            while(!s1.empty() && !s2.empty()){
                sum+=s1.front();
                s1.pop();
                sum1+=s2.front();
                s2.pop();
            }
            if(sum>sum1){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
	re;
}
