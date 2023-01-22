#include"bits/stdc++.h"
using namespace std;
struct node{
  int data;
  node* next;
};
//Create a linked list
void create_list(node* head,node* temp,node* n){
 n=new node();
 n->data=1;
 temp=n;
 head=n;
 int i=1;
 while(i<=100){
   n=new node();
   n->data=i+1;
   temp->next=n;
   temp=temp->next;
 }
 n->next=NULL;
}

//Insertion at the end of linked list
void insert_at_end(node* n,int x){
  node* tail;
  tail=new node();
  tail->data=x;
  n->next=tail;
  tail->next=nullptr;
}

//Printing the linked list
void print_list(node* head){
  while(head!=nullptr){
    cout<<head->data<<" ";
    head=head->next;
  }
}
int main(){
  node* head;
  node* temp;
  node* n;
  head=NULL; 
  create_list(head,temp,n);
  int x;cin>>x;
  insert_at_end(n,x);
  print_list(head);
}
