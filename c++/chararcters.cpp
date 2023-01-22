#include<iostream>
using namespace std;
void method1(int a[]){
  cout<<a[3]<<endl;
}
void method2(int a[3]){
  cout<<a[3]<<endl;
}
void method3(int* a){
  cout<<a[3]<<endl;
}
void method4(int* a){
  cout<<a[5]<<endl;
}
int main(){
  int b[5];
  b[3]=6;
  method1(b);
  method2(b);
  method3(b);
  int n;cin>>n;
  int c[n];
  for(int i=0;i<n;i++){
    cin>>c[i];
  }
  method4(c);
}
