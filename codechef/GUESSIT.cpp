// /*21-03-2021*/
// #include<bits/stdc++.h>
// using namespace std;
// #define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// bool square(int x){
//     int l=1,r=1e6,mid=0;
//     while(l<=r){
//         mid=l+(r-l)/2;
//         if(mid*mid==x){
//             return true;
//         }else if(mid*mid<x){
//             l=mid+1;
//         }else{
//             r=mid-1;
//         }
//     }
//     return false;
// }
// int main(){
//     IOS;
//     int t;cin>>t;while(t--){

//     }
// }
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int l = 1, r = 1000000;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        printf("%d\n", mid);
        fflush(stdout);

        char response[3];
        scanf("%s", response);
        if (strcmp(response, "<") == 0)
            r = mid — 1;
        else
            l = mid;
    }

    printf("! %d\n", l);
    fflush(stdout);
}