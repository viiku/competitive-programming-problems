#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    queue<int>q;
    for(int i=0;i<n;i++){
        cin>>a[i];
        q.push(a[i]);
    }
    int p=a[0];
    while(!q.empty()){
        if(q.front())
        q.pop();

    }
}