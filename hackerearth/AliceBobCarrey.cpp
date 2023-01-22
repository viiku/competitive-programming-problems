#include<bits/stdc++.h>
using namespace std;
bool  equaltwostring(string str,string str1){
    int i=0,j=0;
    while(i<(int)str1.size()){
        while(j<(int)str.size()){
            if((str1[i]==str[j]) || (str1[i]+32==str[j])){
                i++;j++;
            }else{
                j++;
            }
        }
    }
    // cout<<i<<j;
    if(i!=(int)str1.size()){
        return false;
    }
    return true;
}
int main() {
	// Write your code here
    int q;string s1,s2;cin>>q;while(q--){
        cin>>s1>>s2;
        // equaltwostring(s1,s2);
        if(s1.size()<s2.size()){
            cout<<0<<endl;
        }else{
            if(equaltwostring(s1,s2)){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }
        }
    }
}