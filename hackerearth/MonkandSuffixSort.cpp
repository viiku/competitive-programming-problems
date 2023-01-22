#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;int n;cin>>str>>n;
    priority_queue<char>pq;
    for(int i=0;i<(int)str.size();i++){
            pq.push(str[i]);
        if(pq.size()>n){
            pq.pop();
        }
    }
    cout<<pq.top()<<endl;
}