// // #include<bits/stdc++.h>
// // using namespace std;
// // inline int min(int x,int y,int z){ return min(min(x,y),z);}

// // //Recursive Approach
// // // int editdistance(string str,string str1,int n,int m){
// // //     if(n==0){
// // //         return m;
// // //     }

// // //     if(m==0){
// // //         return n;
// // //     }
// // //     if(str[n-1]==str1[m-1]){
// // //         return editdistance(str,str1,n-1,m-1);
// // //     }else{
// // //         return 1+min(editdistance(str,str1,n-1,m-1),editdistance(str,str1,n-1,m),editdistance(str,str1,n,m-1));
// // //     }
// // // }

// // //Memoized Approach
// // // int dp[501][501]={-1};
// // // int editdistance(string str,string str1,int n,int m){
// // //     if(n==0 || m==0){
// // //         if(n==0 && m!=0){
// // //             return m;
// // //         }else if(n!=0 && m==0){
// // //             return n;
// // //         }else if(n==0 && m==0){
// // //             return 0;
// // //         }
// // //     }
// // //     if(dp[n][m]!=-1){
// // //         return dp[n][m];
// // //     }
// // //     if(str[n-1]==str1[m-1]){
// // //         return dp[n][m]=editdistance(str,str1,n-1,m-1);
// // //     }else{
// // //         return dp[n][m]=1+min(editdistance(str,str1,n-1,m-1),editdistance(str,str1,n-1,m),editdistance(str,str1,n,m-1));
// // //     }
// // //     return dp[n-1][m-1];
// // // }



// // //Top Down Approach
// // void editdistance(string str,string str1,int n,int m){
// //     int dp[n+1][m+1];
// //     for(int i=0;i<=n;i++){
// //         for(int j=0;j<=m;j++){
// //             if(i==0 || j==0){
// //                 if(i==0 && j!=0){
// //                     dp[i][j]=j;
// //                 }else if(i!=0 && j==0){
// //                     dp[i][j]==i;
// //                 }else if(i==0 && j==0){
// //                     dp[i][j]=0;
// //                 }
// //             }
// //         }
// //     }
// //     for(int i=1;i<=n;i++){
// //         for(int j=1;j<=m;j++){
// //             if(str[i-1]==str[j-1]){
// //                 dp[i][j]=dp[i-1][j-1];
// //             }else{
// //                 dp[i][j]=1+min(dp[i-1][j-1],dp[i][j-1],dp[i-1][j]);
// //             }
// //         }
// //     }
// //     // return dp[n][m];   
// //     for(int i=0;i<=n;i++){
// //         for(int j=0;j<=m;j++){
// //             cout<<dp[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// // }
// // int main(){
// //     string str,str1;cin>>str>>str1;
// //     int n=(int)str.size(),m=str1.size();
// //     editdistance(str,str1,n,m);
// //     // cout<<editdistance(str,str1,n,m);
// // }


// // A Dynamic Programming based C++ program to find minimum
// // number operations to convert str1 to str2
// #include <bits/stdc++.h>
// using namespace std;
 
// // Utility function to find the minimum of three numbers
// int min(int x, int y, int z) { return min(min(x, y), z); }
 
// void editDistDP(string str1, string str2, int m, int n){
//     // Create a table to store results of subproblems
//     int dp[m + 1][n + 1];
 
//     // Fill d[][] in bottom up manner
//     for (int i = 0; i <= m; i++) {
//         for (int j = 0; j <= n; j++) {
//             // If first string is empty, only option is to
//             // insert all characters of second string
//             if (i == 0)
//                 dp[i][j] = j; // Min. operations = j
 
//             // If second string is empty, only option is to
//             // remove all characters of second string
//             else if (j == 0)
//                 dp[i][j] = i; // Min. operations = i
 
//             // If last characters are same, ignore last char
//             // and recur for remaining string
//             else if (str1[i - 1] == str2[j - 1])
//                 dp[i][j] = dp[i - 1][j - 1];
 
//             // If the last character is different, consider
//             // all possibilities and find the minimum
//             else
//                 dp[i][j]
//                     = 1
//                       + min(dp[i][j - 1], // Insert
//                             dp[i - 1][j], // Remove
//                             dp[i - 1][j - 1]); // Replace
//         }
//     }
 
//     // return dp[m][n];

//     for(int i=0;i<=m;i++){
//         for(int j=0;j<=n;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
 
// // Driver code
// int main(){
//     // your code goes here
//     string str1,str2;cin>>str1>>str2;
//     // cout << editDistDP(str1, str2, str1.length(),
//                     //    str2.length());
//     editDistDP(str1,str2,(int)str1.size(),(int)str2.size());
//     return 0;
// }

