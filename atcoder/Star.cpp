#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int k=n/100;
    long long int p=100*(k+1);
    cout<<p-n<<endl;
}