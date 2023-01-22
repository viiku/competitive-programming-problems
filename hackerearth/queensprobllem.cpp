/*Abridged problem statement: In chess (with an 8 × 8 board), it is possible to place eight
queens on the board such that no two queens attack each other. Determine all such possible
arrangements given the position of one of the queens (i.e. coordinate (a, b) must contain a
queen). Output the possibilities in lexicographical (sorted) order.*/
#include<bits/stdc++.h>
using namespace std;
int row[8],TC,a,b,linecounter;
bool place(int r,int c){
    for(int prev=0;prev<c;prev++){
        if(row[prev]==x || (abs(row[prev]-r))==abs[prev-c])
        return false;
        return true;
    }
}
void backtrack(int c){
    if(c==8 && row[b]==a){
        cout<<<linecounter++<<" "<<row[0]+1;
    }
    for(int j=1;j<8;j++){
        cout<<row[j]+1;
    }
    cout<<"\n";
    for(int r=0;r<8;r++){
        if(place(r,c)){
            row[c]=r;
            backtrack(c+1);
        }
    }
}
int main(){
   int TC;
   cin>>TC;
   while (TC--){
       int a,b;
       cin>>a>>b;
       a--;
       b--; // switch to 0-based indexing
       memset(row, 0, sizeof row); lineCounter = 0;
       cout<<"SOLN COLUMN"<<"\n";
       cout<<"# 1 2 3 4 5 6 7 8"<<"\n";
       backtrack(0); // generate all possible 8! candidate solutions
       if (TC){
            cout<<"\n";
       }
   }
}