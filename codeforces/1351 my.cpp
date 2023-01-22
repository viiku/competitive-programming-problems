#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int a,b;
          cin>>a>>b;
          int a1,b1;
          cin>>a1>>b1;
          if(a+a1==b+b1 || a+b1==b+a1)
          {
               cout<<"YES"<<"\n";
          }
          else
          {
               cout<<"NO"<<"\n";
          }
     }
     return 0;
}
