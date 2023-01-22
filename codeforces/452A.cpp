#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string str;cin>>n>>str;
    if(n==6){
        cout<<"espeon"<<"\n";
    }else if(n==8){
        cout<<"vaporeon"<<"\n";
    }else if(n==7){
        for(int i=0;i<str.size();i++){
            if(str[0]=='j' || str[1]=='o' || str[2]=='l' || str[3]=='t'){
            cout<<"jolteon"<<"\n";
            break;
        }else if(str[0]=='f' || str[1]=='l' || str[2]=='a' || str[3]=='r' && str[2]=='a'){
            cout<<"flareon"<<"\n";
            break;
        }else if(str[0]=='u' || str[1]=='m' || str[2]=='b' || str[3]=='r'){
            cout<<"umbreon"<<"\n";
            break;
        }else if(str[0]=='l' || str[1]=='e' || str[2]=='a' || str[3]=='f'){
            cout<<"leafeon"<<"\n";
            break;
        }else if(str[0]=='g' || str[1]=='l' || str[2]=='a' || str[3]=='c'){
            cout<<"glaceon"<<"\n";
            break;
        }else if(str[0]=='s' || str[1]=='y' || str[2]=='l' || str[3]=='v'){
            cout<<"sylveon"<<"\n";
            break;
        }
        }
    }
    return 0;
}