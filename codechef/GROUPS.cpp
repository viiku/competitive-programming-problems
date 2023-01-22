#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin.ignore();
        cin>>str;
        int i=0,cnt=0;
        while(i<(int)str.size()){
            if(str[i]=='1'){
                cnt++;
                int j=i;
                while(j<((int)str.size())){
                    if(str[j]=='0'){
                        j++;
                        break;
                    }
                    j++;
                }
                i=j;
            }else{
                i++;
            }
        }
        cout<<cnt<<endl;
    }
}