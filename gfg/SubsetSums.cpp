#include<bits/stdc++.h>
using namespace std;

vector<int>ans;
vector<int>sums(vector<int>&arr,int n,int sum){
  cout<<"n value "<<n<<" "<<"sum "<<sum<<endl;
  if(n==0){
      ans.push_back(sum); 
  }
  else if(n>=1){
      ans.push_back(arr[n-1]);
      //sum+=arr[n-1];
      ans.push_back(sum);
      sums(arr,n-1,sum+arr[n-1]);
  }
  cout<<ans.size()<<endl;
  return ans;
}

int main(){
  int n;cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  vector<int>ans1=sums(arr,n,0);
  for(int i:ans1){
      cout<<"i->"<<i<<" ";
  }
}
