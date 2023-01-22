#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;string str;cin>>n;
    deque<int>dq;
    while(n--){
        cin>>str>>a>>b;
        if(str=="pushfront"){
            dq.push_front(b);
            dq.push_front(a);
        }else if(str=="pushback"){
            dq.push_front(a);
            dq.push_back(b);
        }else if(str=="popfront"){
            cout<<dq.front()<<endl;
            dq.pop_front();
        }else if(str=="popback"){
            cout<<dq.back()<<endl;
            dq.pop_back();
        }
    }
}