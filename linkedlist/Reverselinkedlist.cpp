#include"bits/stdc++.h"
using namespace std;
struct node{
  int data;
  node* next;
};
node* head;
int main(){
  head=nullptr;
  node* temp=head;
  node* current;
  int i=1;
  while(i<=10){
    current=new node();
    current->data=i;
    current=current->next;
    i+=1;
  }
  head=current;
  while(temp->next!=nullptr){
    cout<<temp->data<<" ";
  }
}
