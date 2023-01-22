#include<bits/stdc++.h>
using namespace std;
string st="";
stack<pair<string,string>>stk;
int left_index,right_index;
int start_idx;
int delete_Sidx,delete_Eidx;
//append string
void append_String(){
   string str;
   cin>>str;
   stk.push({st,"append"}); 
   st+=str;
}
/*
//Cut String
void cut_String(string query){
      cout<<"Enter the Range based on 0 based Indexing :\n";  
      cout<<"Left Index: ";
      cin>>left_index;
      cout<<"Right Index: ";
      cin>>right_index;
      string cut_string;
      for(int i=left_index;i<=right_index;i++){
          cut_string.push_back(st[i]);
      }
      if((int)st.size()>=(right_index-left_index+1)){
         st.erase(st.begin()+left_index,st.begin()+right_index+1);
      }else{
          cout<<"Range is bigger than String.\n";
      }
      stk.push({cut_string,"cut"});
     // cout<<stk.top()<<endl;
}
*/

//Copy String
void copy_String(){
    //  bool ok=true;
    //  if(ok){
          cout<<"Enter the Range based on 0 based Indexing :\n";  
          cout<<"Left Index: ";
          cin>>left_index;
          cout<<"Right Index: ";
          cin>>right_index;
          string copy_string;
          for(int i=left_index;i<=right_index;i++){
              copy_string.push_back(st[i]);
          }
          stk.push({copy_string,"copy"});
         // cout<<stk.top()<<endl;
     //}
}

//Paste String
void paste_String(){ 
    cout<<"Starting Index to Paste: ";
    cin>>start_idx;
    //if(start_idx>(int)st.size()){
      // st+=stk.top().first;
   // }else{
       st.insert(start_idx,stk.top().first);
       string paste1;
       int size1=(int)stk.top().first.size();
       for(int i=start_idx;i<size1;i++){
         paste1.push_back(stk.top().first[i]);
       }
       stk.push({paste1,"paste"});
   // }
   // if(stk.top().second=="copy"){
     //  st.insert(start_idx,stk.top().first);
   // }
}

/*
void delete_String(){
  cout<<"Enter Starting Index to Delete: ";
  cin>>delete_Sidx;
  cout<<"Enter Last Index to Delete: ";
  cin>>delete_Eidx;
  string delString;
  for(int i=delete_Sidx;i<=delete_Eidx;i++){
    delString.push_back(st[i]);
  }
  stk.push({delString,"delete"});
}*/

//Remember we can only use undo command after cut/paste or delete
void undo_String(){
   if(stk.top().second=="append"){
      if(st.empty()){
          cout<<"String is Empty\n";
      }else{
          st.erase();
      }
   }else if(stk.top().second=="paste"){
      if(!stk.empty()){
          int size=stk.top().first.size();
          st.erase(st.begin()+start_idx,st.begin()+size);
          if(stk.top().second=="copy" ){
            stk.pop();
          }
      }
   }else if(stk.top().second=="cut"){
       st.insert(left_index,stk.top().first);
   }else if(stk.top().second=="delete"){
       st.insert(delete_Sidx,stk.top().first);
       stk.pop();
   }
//   cout<<stk.top()<<" "; 
//   stk.pop();
}
void print_String(){
  cout<<"current string:->"<<st<<endl;
}
int main(){
/*    cout<<"...................... Welcome To Simple Text Editor........................\n";
    cout<<".................. Press Append or append to add string ..................\n";
    cout<<"............... Press Undo or undo to undo the current process..............\n";
    cout<<"............ Press Paste or paste to paste copied part of string............\n";
    cout<<"............Press Cut or cut to Cut selected part of current string.........\n";
    cout<<"......... Press Copy or copy to copy selected part of current string........\n";
 */
    int n;
    cout<<"\nEnter Number of Operation You're going to do: ";
    cin>>n;
    while(n--){  
      string query;cin>>query;
      if(query=="append"){
        append_String();
      }
    /*  else if(query=="cut"){
        cut_String(query);
      }*/
      else if(query=="undo"){
        undo_String();
      }else if(query=="copy"){
        copy_String();
      }else if(query=="paste"){
        paste_String();
      }
      else{
        cout<<"Invalid Input---Please Choose Between append,cut,undo,copy,paste and delete\n";
      }
     /* else if(query=="delete"){
        delete_String();
      }*/
      print_String();
      }
    return 0;
}

