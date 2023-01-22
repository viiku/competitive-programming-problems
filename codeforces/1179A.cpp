#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<int>a(n);
    deque<int>dq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        dq.push_back(a[i]);
    }
    while(q--){
        cin>>x;
        int k=dq.front();
        dq.pop_front();
        int p=dq.front();
        
    }
}