#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0;
    deque<int>dq;
    while(j<n){
        if(a[j]<0){
            dq.push_back(a[j]);
        }
        //O(1) Extra space
        if((j-i+1)<k){
            j++; 
        }else if((j-i+1)==k){
            if(dq.empty()){
                cout<<0<<" ";
            }else{
                if(dq.front()==a[i]){
                    cout<<dq.front()<<" ";
                    dq.pop_front();
                }else{
                    cout<<dq.front()<<" ";
                }
            }
            i++;j++;
        }
    }
}