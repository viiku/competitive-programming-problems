#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    //find kth smallest elelment in an array;
    priority_queue<int>pq,pq1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        pq.push(v[i]);
        pq1.push(v[i]*(-1));
    }
    if(is_heap(v.begin(),v.end())){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    make_heap(v.begin(),v.end());
    for(int &it:v){
        cout<<it<<" ";
    }
/*    while(!pq.empty()){
        cout<<pq.top()<<" "<<pq1.top()*(-1)<<"\n";
        pq.pop();
        pq1.pop();
    }*/
}