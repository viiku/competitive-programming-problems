#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int l=0,h=n-1,mid,result=-1,result1=-1;
    //for first occurence
    while(l<=h){
        mid=l+(h-l)/2;
        if(a[mid]==x){
            result=mid;
            h=mid-1;
        }else if(a[mid]>x){
            h=mid-1;
        }else{
            l=mid+1;
        }
    } 
    // for last occurence
    while(l<=h){
        mid=l+(h-l)/2;
        if(a[mid]==x){
            result1=mid;
            l=mid+1;
        }else if(a[mid]>x){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<result<<" "<<result1<<"\n";
    return 0;
}