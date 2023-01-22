#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;cin>>t;while(t--){
        cin>>a>>b;
        if(b>a){
            cout<<1<<endl;
        }else if(a==b){
            cout<<2<<endl;
        }else if(a>b){
            int k=a-b;
            if(b==1){
                int cnt=0;
                while(a>b){
                    b+=1;
                    cnt++;
                    if(b==a){
                        cout<<min(cnt+1,k)<<endl;
                        break;
                    }
                    a/=b;cnt++;
                    if(b==a){
                        cout<<min(cnt+1,k)<<endl;
                        break;
                    }
                }
            }else if(b!=1){
                int cnt=0;
                while(a>b){
                    a/=b;cnt++;
                    if(b==a){
                        cout<<min(cnt+1,k)<<endl;
                        break;
                    }
                    b+=1;cnt++;
                    if(b==a){
                        cout<<min(cnt+1,k)<<endl;
                        break;
                    }
                }
            }
        }
    }
}