#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        char a[n][n];
        bool ok=true;
        int index1=-1,index2=-1;
        int index3=-1,index4=-1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                if(a[i][j]=='*' && ok){
                    index1=i;
                    index2=j;
                    ok=false;
                }else if(a[i][j]=='*' && !ok){
                    index3=i;
                    index4=j;
                }
            }
        }
        cout<<index1<<" "<<index2<<" "<<index3<<" "<<index4<<endl;;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(j==min(index2,index4) && (i==index1)){
        //             cout<<'*';
        //         }else if(j==max(index3,index2) && i==index3){
        //             cout<<"*";
        //         }else{
        //             cout<<a[i][j];
        //         }
        //     }
        //     cout<<endl;
        // }
    }
}
