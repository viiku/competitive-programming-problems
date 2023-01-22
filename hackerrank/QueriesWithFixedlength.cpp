#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,q;cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){
        cin>>x;
        int i=0,j=0;
        vector<int>v;
        deque<int>dq;
        while(j<n){
            if((j-i+1)<x){
                while(!dq.empty() && dq.back()<a[j]){
                    dq.pop_back();
                }
                dq.push_back(a[j]);
                j++;
            }else if((j-i+1)==x){
                while(!dq.empty() && dq.back()<a[j]){
                    dq.pop_back();
                }                
                dq.push_back(a[j]);
                if(a[i]==dq.front()){
                    v.emplace_back(dq.front());
                    dq.pop_front();
                }else{
                    v.emplace_back(dq.front());
                }
                i++;
                j++;
            }
        }
        cout<<*min_element(v.begin(),v.end())<<endl;
    }
}