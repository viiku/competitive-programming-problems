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
int main()
{
	IOS;
	string str1,str;
    cin>>str>>str1;
	int cnt=0,cnt1=0,cnt2=0;;
    for(int i=0;i<str.size();i++){
		if(str[i]!=str1[i]+32 || str[i]!=str1[i]-32){
			continue;
		}else{
			if((str[i]-str1[i])>0){
				cnt++;
			}else if((str[i]-str1[i])<0){
				cnt1++;
			}else{
				cnt2++;
			}
		}
	}
	if(cnt>cnt1){
		cout<<1<<"\n";
	}else if(cnt<cnt1){
		cout<<-1<<"\n";
	}else if(cnt2){
		cout<<0<<"\n";
	}
	re;
}
