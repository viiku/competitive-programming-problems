#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
};
node* head;
//Crating linked list
void create_linkedlist(int x){
  node* temp=new node();
  temp->data=x;
  temp->next=nullptr;
  node* curr=head;
  if(head==nullptr){
    head=temp;
  }else{
    while(curr->next!=nullptr){
      curr=curr->next;
    }
    curr->next=temp;
  }
}
//Deletion of linked list
void deletion_linkedlist(int position){
  node* temp=head;
  if(position==0){
    head=temp->next;
  }else{
    for(int i=1;i<position;i++){
       temp=temp->next;
     }
     node* temp1=temp->next;
     temp->next=temp1->next;
     free(temp1);
  }
}

//printin linked list
void print_linkedklist(){
     node* temp=head;
     while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
      }
} 
int main(){
  head=nullptr;
  for(int i=1;i<=10;i++){
    int x;cin>>x;
    create_linkedlist(x);
  }
  deletion_linkedlist(5);
  print_linkedklist();
}

