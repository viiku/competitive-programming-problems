#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    // stack<pair<int,int>>sp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
/*    int mn=a[0];
    for(int i=0;i<n;i++){
        mn=min(mn,a[i]);
        sp.push(make_pair(a[i],mn));
    }
/*    while(!sp.empty()){
        cout<<sp.top().first<<" "<<sp.top().second<<"\n";
        sp.pop();

    }*/
    int sum=0,i=0,mx=0,j=0;
    while(j<n){
        if((j-i+1)<k){
            sum+=a[j];
            j++;
        }else if((j-i+1)==k){
            sum+=a[j];
            mx=max(mx,sum);
            sum-=a[i];
            i++;j++;
        }
    }
    for(i=0;i<(n-k+1);j++){
        if((j-i+1)<k){
            sum+=a[j];
        }else if((j-i+1)==k){
            sum+=a[j];
            mx=max(mx,sum);
            sum-=a[i];
            i++;
        }
    }
    cout<<mx<<endl;
    // int i=0,j=0;
    // bool ok=true;
    // list<int>ls;
    // vector<int>v;
    // while(j<n){
    //     if(a[j]<0){
    //         ls.push_back(a[j]);
    //         if((j-i+1)<k){
    //             j++;
    //         }else if((j-i+1)==k){
    //             if(!ls.empty()){
    //                 if(ls.front()==a[i]){
    //                     v.emplace_back(ls.front());
    //                     ls.pop_front();
    //                 }
    //             }else{
    //                 v.emplace_back(0);
    //             }
    //             i++;
    //             j++;
    //         }
    //     }  
    // }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
}