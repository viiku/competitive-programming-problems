#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		int p=0,index=0;
		for(int i=0;i<n;i++){
			if(str[i]=='8'){
				p=1;
				index=i;
				break;
			}
		}
		if(p==1)
		{
			if(n-index>=11)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
		else
		cout<<"NO"<<endl;
		
	}
}