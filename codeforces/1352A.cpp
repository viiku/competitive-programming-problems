#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int countZeros(int n){
    int cnt=0;
    bool ok=true;
    while(n>0){
        if(n%10!=0){
            cnt+=1;
            v.emplace_back(n%10);
        }
        n/=10;
    }
    return cnt;
}
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        if(n>=1 && n<=9){
            cout<<1<<"\n"<<n<<endl;
        }else{
            int p=countZeros(n);
            cout<<p<<"\n";
            for(int i=v.size()-1;i>=0;i--){
                cout<<v[i]*p<<" ";
                p--;
            }
        }
    }
}