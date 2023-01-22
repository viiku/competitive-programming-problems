#include<bits/stdc++.h>
using namespace std;
int searchincircularsorted(int a[],int n,int x){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid=l+(h-l)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]<=a[h])
            if(x>a[mid] && x<a[h])
            l=mid+1;
            else
            h=mid-1;
        else if(a[l]<=a[mid])
            if(x>=a[l] && x<a[mid])
            h=mid-1;
            else
            l=mid+1;
    }
    return -1;
}
int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<searchincircularsorted(a,n,x);
}