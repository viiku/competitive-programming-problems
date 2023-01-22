#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
/*    s="hello";
    int j = 4;
	for(int i =ss.size()-1;i>=0;i--){
		if(ss[i]==s[j]){
			s.pop_back();
			j--;
			if(j==-1)break;
		}
	}
	if(s.size()>0)cout<<"NO";
	else cout<<"YES";
	return 0;*/
    int p=0,q=0,r=0,s=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='h'){
            p++;
        }else if(p>=1 && str[i]=='e'){
            q++;
        }else if(q>=1 && str[i]=='l'){
            r++;
        }else if(r>=1 && str[i]=='o'){
            s++;
        }else{
            continue;
        }
    }
    if(p!=0 && q!=0 && r>=2 && s!=0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}