#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
vector<int>v;
int l,r;
void CheckDigit(){
    cin>>l>>r;
    while(l!=0){
//        if(l%10>7){
            v.emplace_back(l%10);
//        }
        l/=10;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]<4){
            cout<<4-v[i];
        }else if(v[i]>4 && v[i]<7){
            cout<<7-v[i];
        }else if(v[i]>7){
            int q=0;
            q++;
            if(q==1){
                cout<<v[0]+1;
            }
        }else if(v[i]==4 || v[i]==7){
            cout<<v[i];
        }
    }
/*    for(auto it:v){
        cout<<it;
    }*/

}
int main(){
    CheckDigit();
}