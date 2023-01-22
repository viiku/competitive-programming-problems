#include<iostream> 
#include <string> 

using namespace std; 
int main(){ 
int t; 
cin>>t; 
while(t>0){ 
int n;  
int s; 
string c; 
cin>>n; 
if(n%6==0 || n%6==1){ 
 c="WS"; 
 if(n%12==6) s=n+1; 
 else if(n%12==7) s=n-1; 
 else if(n%12==1) s=n+11; 
 else if(n%12==0) s=n-11; 
 cout<<s<<" "<<c<<endl;   
} 
else if(n%6==2 || n%6==5){ 
 c="MS"; 
 if(n%12==5) s=n+3; 
 else if (n%12==8) s=n-3; 
 else if(n%12==2) s=n+9; 
 else if(n%12==11) s=n-9; 
 cout<<s<<" "<<c<<endl;  
} 
else if(n%6==3 || n%6==4){ 
 c="AS"; 
 if(n%12==4) s=n+5; 
 else if(n%12==9) s=n-5; 
 else if(n%12==3) s=n+7; 
 else if(n%12==10) s=n-7; 
 cout<<s<<" "<<c<<endl;    
} 
 
 t--;  
} 


return 0; 
 
}