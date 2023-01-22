#include<bits/stdc++.h>
using namespace std;
void printPermutation(int N){
    int temp=N,count=0;
    while(temp>0){
        count++;
        temp/=10;
    }
    vector<int>num(count);
    int j=0;
    while(N>0){
        num[j]=N%10;
        j++;
        N=N/10;
    }
    int cnt=0;
    while (next_permutation(num.begin(),num.end())){
        string str;
        for(int i=0;i<num.size();i++){
            str.push_back(i);
            cout<<num[i];
        }
        int k=stoi(str);
        if(k%7==0){
            cnt++;
        }
        cout<<endl;
    }
    // cout<<cnt<<endl;
}
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        printPermutation(n);
    }
}