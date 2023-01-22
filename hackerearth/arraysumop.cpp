#include<iostream>
using namespace std;
int main(){
   long long int n,m,f,l,sum;
   cin>>n>>m;
   sum=n*(n-1)/2-1;
   f=1;
   l=n;
   long long int op[m];
   for(int i=0;i<m;i++)
   cin>>op[i];
   for(int i=0;i<m;i++){ 
        long long int t=l;
        if((op[i]<=n-1 && op[i]>=2)|| op[i]==f ||op[i]==l){
        cout<<sum+f+l<<endl;
        l=f;
        f=t;
     //cout<<f<<" "<<l<<endl; 
    }else{
        l=op[i];
        cout<<sum+f+l<<endl;
    }
}
return 0;
}
    
      
