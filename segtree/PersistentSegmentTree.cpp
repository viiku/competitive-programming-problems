#include<bits/stdc++.h>
using namespace std;
#define MAXN 100;
struct node{
    int val; //Stores sum of the elements in node
    node *left,*right; //Creating pointer to left right
    node(){}
    node(node *l,node *r,int v){
        left=l;
        right=r;
        val=v;
    }
};

int a[MAXN];
node *version[MAXN];
int main(){

}