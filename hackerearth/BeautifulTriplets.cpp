#include<bits/stdc++.h>
using namespace std; 
using ll=long long int;
int countTriplets (int arr[], int d, int n) 
{ 
    int count = -1; 
      
    // Create a map to store (key, values) pair.  
    map<int, int> set; 
  
    // Traverse the array and check that we  
    // have already put (a[i]-d and a[i]-2*d)  
    // into map or not. If yes we have to get  
    // the values of both the keys and  
    // multiply them, else put a[i] into the map.  
    for(int i = 0; i < n; i++) 
    { 
        if ((set.find(arr[i] - d) != set.end()) && 
            (set.find(arr[i] - 2 * d) != set.end())) 
        { 
            count += (set[arr[i] - d] *  
                      set[arr[i] - 2 * d]); 
        } 
  
        // Update the map 
        if (set.find(arr[i]) == set.end()) 
            set[arr[i]] = 1; 
        else
            set[arr[i]] += 1; 
    } 
    return count+1; 
} 
  
// Driver Code 
int main()  
{  
      
    // Test Case 1:  
    int n,d1;cin>>n>>d1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << countTriplets(arr, d1, n) << endl;  
}