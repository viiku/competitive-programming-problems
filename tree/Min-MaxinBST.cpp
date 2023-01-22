#include<bits/stdc++.h>
using namespace std;
//Node structure in tree
struct BSTnode{
  int data;
  BSTnode* left=nullptr;
  BSTnode* right=nullptr;
};
//Creating new nodes
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
int main(){
  BSTnode* rootptr=nullptr;
  rootptr=insert(rootptr,10);      
  rootptr=insert(rootptr,20);
  rootptr=insert(rootptr,15);
  rootptr=insert(rootptr,50);
}

