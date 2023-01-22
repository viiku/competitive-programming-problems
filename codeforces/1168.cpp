#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string str;cin>>n;while(n--){
        cin>>str;
        int sum=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                sum+=2;
            }else if(str[i]=='2' || str[i]=='3' || str[i]=='5'){
                sum+=5;
            }else if(str[i]=='4'){
                sum+=4;
            }else if(str[i]=='6' || str[i]=='9' || str[i]=='0'){
                sum+=6;
            }else if(str[i]=='7'){
                sum+=3;
            }else if(str[i]=='8'){
                sum+=7;
            }
        }
        cout<<sum<<" "<<"leds\n";
    }
    return 0;
}