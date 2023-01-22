#include<bits/stdc++.h>
using namespace std;

#define mx 9
int grid[mx][mx];

bool show_solution(int grid[mx][mx],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<grid[i][j]<<" ";
    }
    cout<<endl;
  }
}



bool solved_completely(int grid[mx][mx],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(!grid[i][j]){
        return false;
      }
    }
  }
  return true;
}

int checkPossiblevalues(int grid[mx][mx],int n,int a[],int row,int col){
  int n=0;
  int s=(int)(sqrt(n));
  int b[mx+1]={0};

  for(int i=0;i<n;i++){
    b[grid[row][i]]=1;
  }
  
  for(int i=0;i<n;i++){
    b[grid[i][col]]=1;
  }

  row=(row/s)*s, col=(col/s)*s;
 
 for(int i=row;i<row+s;i++){
   for(int j=col;j<col+s;j++){
     b[grid[i][j]]=1;
   }
 }


 for(int i=1;i<=n;i++){
   if(!b[i]){
     a[n++]=i;
   }
 }
 return n;
}



void solve(int grid[mx][mx],int n,int solution,bool ok,bool pk){
  int i,j,a[mx+1]={0},n=0;

  if(ok){
    return;
  }

  if(solved_completely(n)){
    if(!ok){
      cout<<"Solved completely"<<endl;
    }
    ok=true;

    cout<<"\n\n Solution Number would be: "<<(solution++)<<endl;
    show_solution(grid,n);
  }
}

int main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>grid[i][j];
    }  
  } 
  int solution=1;
  bool ok=0;
  bool pk=false;
  
  cout<<"Finding Solution\n";
  solve(grid,n,solution,ok,pk);
}
