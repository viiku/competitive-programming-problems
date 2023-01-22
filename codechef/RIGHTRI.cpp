#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
bool CheckRight(int x1,int y1,int x2,int y2,int x3,int y3){
    int a=pow((x2-x1),2)+pow((y2-y1),2);
    int b=pow((x3-x2),2)+pow((y3-y2),2);
    int c=pow((x3-x1),2)+pow((y3-y1),2);
    if((a>0 and b>0 and c>0) and (a==(b+c) || b==(a+c) || c==(a+b)))
        return true;
    return false;
}
int main(){
    ll n;
    cin>>n;
    int count=0;
    while(n--){
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(CheckRight(x1,y1,x2,y2,x3,y3)){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}