#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string str){
    int i=0,j=(int)str.size()-1;
    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    int k,n,x,sum=0;string str,rev;
    multimap<string,int>mp;
    cin>>k>>n;while(k--){
        cin>>str>>x;
        rev=str;
        reverse(rev.begin(),rev.end());
        if(ispalindrome(str)){
            sum+=x;
        }else{
            auto it=mp.find(str);
            if(it!=mp.end()){
                sum+=it->second;
            }else{
                mp.insert(make_pair(rev,x));
            }
        }
    }
    cout<<sum<<endl;
}