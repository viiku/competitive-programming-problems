#include<iostream>
#include<set>
#include<unordered_set>
#include<map>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
//    set<int>s1;
    map<int,int>mp;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
//        s1.insert(a[i]);
        mp[a[i]]++;
    }
    
    return 0;
}