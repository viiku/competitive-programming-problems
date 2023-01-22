// Date:14-04-2021
// Time:22:57:43
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define testcases ll t; cin>>t; while(t--);
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    string text,pattern;cin>>text>>pattern;;
    // Get the first occurrence
    string replacestr="Y";
    size_t pos=-1;
    pos=text.find(pattern);
    if(pos==-1){
        cout<<"NOT FOUND\n";
    }else{
        // Repeat till end is reached
        while( pos!=string::npos){
            // Replace this occurrence of Sub String
            text.replace(pos,pattern.size(),"Y");
            // Get the next occurrence from the current position
            pos=text.find(pattern,pos+(int)replacestr.size());
            if(pos>(int)text.size()){
                break;
            }
        }
        cout<<text<<endl;
    }
}