#include<bits/stdc++.h>
using namespace std;
int main(){
    int t1,t2,t3;cin>>t1>>t2>>t3;
    cout<<min({abs(t1-t2)+abs(t2-t3),abs(t1-t3)+abs(t3-t2),abs(t2-t3)+abs(t3-t1),abs(t2-t1)+abs(t1-t3),abs(t3-t2)+abs(t2-t1),abs(t3-t1)+abs(t1-t2)});
}