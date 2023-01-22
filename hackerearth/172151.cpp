#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;int n;
    set<int>s;
    while(cin>>str>>n){
        if(str=="insert"){
            s.insert(n);
        }else if(str=="exists"){
            if(s.find(n)!=s.end()){
                cout<<"true\n";
            }else{
                cout<<"false\n";
            }
        }else if(str=="delete"){
            if(s.find(n)!=s.end()){
                s.erase(n);
            }
        }
    }
    return 0;
}