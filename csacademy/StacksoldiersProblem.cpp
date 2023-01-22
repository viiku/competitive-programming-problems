#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // for(int i=0;i<n;i++){
    //     bool clearVisiblity=true;
    //     for(int j=i;j>=0;j--){
    //         if(a[j]>a[i] && i!=j){
    //             cout<<j<<" ";
    //             clearVisiblity=false;
    //             break;
    //         }
    //     }
    //     if(clearVisiblity){
    //         cout<<-1<<" ";
    //     }
    // }
    //Priority queue Solution(if we'd have only asked about if the soldier has clear
    //visiblity or not then we'd have just check top elemnt in priority queue
    //which is offcourse maximum element and can say the answer.Since here 
    //they're asking about the previous closest maximum element so we'd check
    //stack method.)
    stack<int>stk;
    for(int i=0;i<n;i++){
        while(!stk.empty() && stk.top()<=a[i]){
            stk.pop();
        }
        if(stk.empty()){
            cout<<-1<<" ";
        }else{
            cout<<stk.top()<<" ";
        }
        stk.push(a[i]);
    }
}