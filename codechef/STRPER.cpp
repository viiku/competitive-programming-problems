#include<bits/stdc++.h>
using namespace std;
void permutaion(string str,int l,int r){
    if(l==r){
        cout<<str<<endl;
    }else{
        for(int i=l;i<=r;i++){
            swap(str[l],str[i]);
            permutaion(str,l+1,r);
            swap(str[l],str[i]);
        }
    }
}
int main(){
    string str;cin>>str;
    int n=(int)str.size();
    permutaion(str,0,n-1);
}