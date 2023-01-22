#incldue<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==0){
            cntz++;
        }else if(a[i]>0){
            cntp++;
        }else if(a[i]<0){
            cntn++;
        }
    }
    int h=(n/2)+1;
    if(cntz>=h){
        if(n>2){
            cout<<0<<"\n";
        }else if(n==2){
            
        }
    }
}