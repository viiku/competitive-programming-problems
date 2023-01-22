#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<int>v;
        int left,right;cin>>left>>right;
        for(int i=left;i<=right;i++){
            int k=0,p=i;
            bool ok=true;
            if(i<10){
                v.push_back(i);
            }else{
                while(i>0){
                    k=i%10;
                    if(k==0){
                        break;
                    }else{
                        if(p%k==0){
                            v.push_back(k);
                        }
                    }
                    i/=10;
                }
            }
        }
        for(int i:v){
            cout<<i<<" ";
        }
}