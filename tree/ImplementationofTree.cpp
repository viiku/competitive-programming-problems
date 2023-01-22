#include<bits/stdc++.h>
using namespace std;
struct BSTnode{
  int data;
  BSTnode* left;
  BSTnode* right;
};

//Creating a new node each time
BSTnode* GetNewnode(int data){
  BSTnode* newnode=new BSTnode();
  newnode->data=data;
  newnode->left=nullptr;
  newnode->right=nullptr;
  return newnode;
}

//Inserting nodes in tree
BSTnode* insert(BSTnode* rootptr,int data){
  if(rootptr==nullptr){
    rootptr=GetNewnode(data);
  }else if(data<=rootptr->data){
    rootptr->left=insert(rootptr->left,data);
  }else{
    rootptr->right=insert(rootptr->right,data);
  }
  return rootptr;
}

bool search(BSTnode* rootptr,int data){
  if(rootptr==nullptr) return false;
  else if(rootptr->data==data) return true;
  else if(data<=rootptr->data) return search(rootptr->left,data);
  else return search(rootptr->right,data);
}

//printing tree 

int main(){
  //To store the address of root node
  BSTnode* rootptr=nullptr;  
  rootptr=insert(rootptr,15);
  rootptr=insert(rootptr,10);
  rootptr=insert(rootptr,20);
  int number;cin>>number;
  if(search(rootptr,number)){
      cout<<"YES\n";
   }else{
      cout<<"NO\n";
   }
}
