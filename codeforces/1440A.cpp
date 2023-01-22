#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,c0,c1,h;string str;cin>>t;while(t--){
        cin>>n>>c0>>c1>>h>>str;
        int cnt0=0,cnt1=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                cnt0++;
            }else{
                cnt1++;
            }
        }
        if(cnt0!=0 && cnt1!=0){
            if(h>c0 && h>c1){
                cout<<min((cnt0*h+n*c0),(cnt1*h+n*c1))<<"\n";
            }else if(h>=c0 && h<=c1){
                cout<<min(n*c0+min(h*cnt0,h*cnt1),n*c1+min(h*cnt0,h*cnt1))<<"\n";
            }else if(h<=c0 && h>=c1){
                cout<<min(n*c0+min(h*cnt0,h*cnt1),n*c1+min(h*cnt0,h*cnt1))<<"\n";
            }
        }else{
            if(cnt0==0){
                cout<<c1*n<<"\n";
            }else{
                cout<<c0*n<<"\n";
            }
        }
    }
    return 0;
}