 #include <bits/stdc++.h>  
using namespace std; 
int minDifferenceAmongMaxMin(int arr[], int N, int K){  
    sort(arr, arr + N);  
    int res = INT_MAX; 
    for (int i = 0; i < (N - K); i++){  
        int curSeqDiff = arr[i + K - 1] - arr[i]; 
        res = min(res, curSeqDiff); 
    } 
    return res; 
}  
int main() 
    {
        int t;cin>>t;while(t--){
            int N,K;cin>>N>>K;
            int arr[N];
            for(int i=0;i<N;i++){
                cin>>arr[i];
            }
            cout << minDifferenceAmongMaxMin(arr, N, K);
        } 
        return 0; 
    }