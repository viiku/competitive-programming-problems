#include<bits/stdc++.h>
using namespace std;

//siftUp in heap
int siftUp(vector<int>&heap,int index){
  while(index>1 && heap[index]>heap[index/2]){
    swap(heap[index],heap[index/2]);
    index/=2;
  }
  return index;
}

//siftDown in heap
int siftDown(vector<int>&heap,int index){
  while(2*index<(int)heap.size()){
    int child=2*index;
    if(child+1<(int)heap.size() && heap[child+1] > heap[child]){
        child+=1;
    }
    if(heap[child] > heap[index]){
        swap(heap[child],heap[index]);
        index=child;
    }else{
        return index;
    }
  }
  return index;
}


// Finding peek element in heap
int peek(vector<int>&heap){
  return heap[1];
}

//Inserting values in to heap
void insert(vector<int>&heap,int key){
  heap.push_back(key);
  siftUp(heap,(int)heap.size()-1);
}

//Popping elements from heap
int pop(vector<int>&heap){
  int key=heap[1];
  swap(heap[1],heap.back());
  heap.pop_back();
  siftDown(heap,1);
  return key;
}

int main(){
  int n;cin>>n;
  vector<int>heap;
  while(n>0){
      int query,value;
      cin>>query;
      if(query==1){
            cin>>value;
            insert(heap,value);
      }else if(query==2){
           // pop(heap);
            cout<<pop(heap)<<endl;
      }else{
            cout<<peek(heap)<<endl;
      }
      n--;
  }
}
