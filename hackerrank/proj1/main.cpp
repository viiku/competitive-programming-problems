#include<iostream>
using namespace std;
#include"functions.h"
int main(){
  cout<<"Printing data from 1st File\n";
  print_hello();
  int n;
  cout<<"------------Enter the Nth Number-------------: ";
  cin>>n;
  cout<<"Printing data from 2nd File\n";
  cout<<"The "<<n<<"th Fibonacci Number is: "<<fibo(n)<<endl;
  return 0;
}

