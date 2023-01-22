#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int>s;
    for(int i=0;i<n-1;i++){
        s.insert(abs(a[i]-a[i+1]));
    }
    int i=1;
    bool ok=true;
    while(i<=(n-1)){
        if(s.count(i)){
            ok=false;
            break;
        }
        i++;
    }
    if(ok){
        cout<<"Jolly\n";
    }else{
        cout<<"Not Jolly\n";
    }
}