#include<bits/stdc++.h>
using namespace std;
deque<char>dq;
int main(){
    string str;int k;cin>>str>>k;
    for(int i=0;i<str.size();i++){
        dq.emplace_back(str[i]);
    }
    while(k!=0){
        dq.push_front(dq.back());
        dq.pop_back();
        k--;
    }
    for(auto it:dq){
        cout<<it;
    }
//    cout<<str;
    return 0;
}