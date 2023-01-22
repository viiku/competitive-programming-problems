#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;signed char ch;cin>>n;
    stack<int>stk;
    for(int i=1;i<=n;i++){
        cin>>ch;
        if(ch=='X'){
            if(!stk.empty()){
                stk.pop();
            }
            cout<<stk.top()<<" ";
        }else if(ch=='Y'){
            if(!stk.empty()){
                stk.push(2*(stk.top()));
            }
            cout<<stk.top()<<" ";
        }else if(ch=='+'){
            int k=2,sum=0;
            deque<int>dq;
            while(k>=1){
                dq.push_back(stk.top());
                sum+=stk.top();
                stk.pop();
                k--;
            }
            while(!dq.empty()){
                stk.push(dq.back());
                dq.pop_back();
            }
            stk.push(sum);
                    cout<<stk.top()<<" ";
        }else{
            stk.push((int)ch-(int)'0');
                    cout<<stk.top()<<" ";
        }
    }
    // int total=0;
    // while(!stk.empty()){
    //     cout<<stk.top()<<" ";
    //     total+=stk.top();
    //     stk.pop();
    // }
    // cout<<total<<endl;
}