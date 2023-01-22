#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>first(n),second(n);
    for(int i=0;i<n;i++) cin>>first[i];
    for(int i=0;i<n;i++) cin>>second[i];
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());
    int mn;
    vector<int>v;
    for(int i=0;i<n;i++){
        int l=0,r=n-1,mid=0;
        mn=1e9+7;
        while(l<=r){
            mid=l+(r-l)/2;
            int x=abs(second[mid]-first[i]);
            if(min(x,mn)<mn){
                mn=min(x,mn);
            }else if(second[mid]>first[i]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        v.push_back(mn);
    }
    cout<<*min_element(v.begin(),v.end());
}