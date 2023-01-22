#include<bits/stdc++.h>
using namespace std;
int findRotationCOunt(int a[],int n){
    int l=0,h=n-1,mid;
    while(l<=h){
        //arrray is sorted in increasing order
        if(a[l]<=a[h]){
            return l;
        }
        mid=(l+h)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(a[mid]<=a[next] && a[mid]<=a[prev])
            return mid;
        else if(a[mid]<=a[h])
            h=mid-1;
        else if(a[mid]>=a[l])
            l=mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findRotationCOunt(a,n)<<"\n";
}