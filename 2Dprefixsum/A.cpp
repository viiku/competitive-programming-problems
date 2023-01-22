#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int a[5][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>>prefixsum(n+1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            prefixsum[i][j]=0;
        }
    }    
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            prefixsum[i][j]=prefixsum[i-1][j]+prefixsum[i][j-1]-prefixsum[i-1][j-1]+a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<prefixsum[i][j]<<" ";
        }
        cout<<endl;
    }
}