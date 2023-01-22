#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
using ld=long double;
int main(){
    int n;char ch;ld x;cin>>n;
    priority_queue<ld>pq;
    while(n--){
        cin>>ch;
        if(ch=='+'){
            cin>>x;
            pq.push(x);
        }else if(ch=='-'){
            pq.pop();
        }
    }
    cout<<pq.top()<<endl;
}