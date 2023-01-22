#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
};
node* head;
node* temp;
node* curr;
int main(){
  curr=new node();
  temp=curr;
  head=temp;
  int q,n;cin>>q;while(q--){
    cin>>n;
    curr->data=n;
    temp->next=curr;
    temp=temp->next;
    curr=new node;   
  }
  temp->next=nullptr;
  while(head!=nullptr){
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}
