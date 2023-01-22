#include<bits/stdc++.h>
using namespace std;
struct BSTnode{
  int data;
  BSTnode* left;
  BSTnode* right;
};

//Creating a new node each time
BSTnode* GetNewnode(int data){
  BSTnode* newnode=new BSTnode(data);
  //newnode->data=data;
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

//Level order Traversal
void LevelOrder(BSTnode* rootptr){
  if(rootptr==nullptr){
    return ;
  }
  queue<BSTnode*>q;
  //#While there is at least one discovered node
  while(!q.empty()){
    BSTnode* current=q.front();
    cout<<current->data<<" ";
    if(current->left!=nullptr) q.push(current->left);
    if(current->right!=nullptr) q.push(current->right);
    q.pop(); //Removing the element at front

  }
}

//DFS- Preorder, Inorder, Postorder
void preorder(BSTnode* root){
  if(root==nullptr) return;
  cout<<root->data;
  preorder(root->left);
  preorder(root->right);
}


void inorder(BSTnode* root){
  if(root==nullptr){
    return ;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

void postorder(BSTnode* root){
  if(root==nullptr){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}

/*
bool search(BSTnode* rootptr,int data){
  if(rootptr==nullptr) return false;
  else if(rootptr->data==data) return true;
  else if(data<=rootptr->data) return search(rootptr->left,data);
  else return search(rootptr->right,data);
}
*/
//printing tree 

int main(){
  //To store the address of root node
  BSTnode* rootptr=nullptr;  
  rootptr=insert(rootptr,15);
  rootptr=insert(rootptr,10);
  rootptr=insert(rootptr,20);
  int number;cin>>number;
/*
   if(search(rootptr,number)){
      cout<<"YES\n";
   }else{
      cout<<"NO\n";
   }
*/
}
