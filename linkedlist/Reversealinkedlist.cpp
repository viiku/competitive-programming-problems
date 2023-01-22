#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
};
node* head;
//Inserting in a list
void insert(int x){
  node* temp=new node();
  node* curr=head;
  temp->data=x;
  temp->next=nullptr;
  if(head==nullptr){
    head=temp;
  }else{
    while(curr->next!=nullptr){
      curr=curr->next;
    }
    curr->next=temp;
  }
}
//Reverse a linked list
void reverse(){
  node* prev=nullptr;
  node* next=nullptr;
  node* current=head;
  while(current!=nullptr){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  head=prev;
}
//printing linked list
void print(){
  node* temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int main(){
  head=nullptr;
  int x;
  for(int i=1;i<=10;i++){
    cin>>x;
    insert(x);
    reverse();
  }
  print();
}
