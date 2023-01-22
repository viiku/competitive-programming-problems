#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,count=0;
        cin>>a>>b;
        vector<int>v={6,2,5,5,4,5,6,3,7,6};
        string str=to_string(a+b);
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                count+=v[0];
            }else if(str[i]=='1'){
                count+=v[1];
            }else if(str[i]=='2'){
                count+=v[2];
            }else if(str[i]=='3'){
                count+=v[3];
            }else if(str[i]=='4'){
                count+=v[4];
            }else if(str[i]=='5'){
                count+=v[5];
            }else if(str[i]=='6'){
                count+=v[6];
            }else if(str[i]=='7'){
                count+=v[7];
            }else if(str[i]=='8'){
                count+=v[8];
            }else if(str[i]=='9'){
                count+=v[9];
            }
        }
        cout<<count<<"\n";
    }
    return 0; 
}