#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque<int>dq;
    for(int i=1;i<=n;i++){
        dq.push_back(i);
    }
    vector<int>v;
    int q=0;
    while(!dq.empty()){
        int p=0;
        if(p==0){
            v.emplace_back(dq.front());
            dq.pop_front();
            p++;
            if(p==1){
                dq.push_back(dq.front());
                q=dq.front();
                dq.pop_front();
            }
        }
    }
    cout<<"Discarded cardes: ";
    for(auto x:v){
        cout<<x<<", ";
    }
    cout<<"\n";
    cout<<"Remaining card: "<<q<<"\n";
    return 0;
}