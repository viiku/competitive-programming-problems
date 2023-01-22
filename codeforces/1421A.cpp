#include <iostream> 
using namespace std;  
int findX(int A, int B) 
{ 
    int j = 0, x = 0;  
    while (A || B) { 
        if ((A & 1) && (B & 1)) {  
            x += (1 << j); 
        } 
        A >>= 1; 
        B >>= 1; 
        j += 1; 
    } 
    return x; 
}  
int main() 
{ 
    int t;cin>>t;while(t--){
        int A,B;cin>>A>>B;
        int X = findX(A, B); 
        cout<<(A^X)+(B^X)<<"\n"; 
    } 
    return 0; 
}