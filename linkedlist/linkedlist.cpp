#include<bits/stdc++.h>
using namespace std;
class node{
    public:
      int data;
      node* next;
};

//insertion a node at front
void insert_at_front(node** head_ref,int new_data){
  node* new_node=new node();
  new_node->data=new_data;
  new_node->next=
}


//insertion in linkedlist after x
void insertion(node* x,node* z){

}




//printing linklist
void printlist(node* n){
  while(n!=NULL){
    cout<<n->data<<" ";
    n=n->next;
  }
}

int main(){
  //list with three nodes
  node* head=NULL;
  node* second=NULL;
  node* third=NULL;

  //aloocate nodes in heap
  head=new node();
  second=new node();
  third=new node();

  //assigning data in first node
  head->data=1;
  head->next=second;
  
  second->data=2;
  second->next=third;

  third->data=3;
  third->next=NULL;


  //Traversal of linked list
  printlist(head);
}
