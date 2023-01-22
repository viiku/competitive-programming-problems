#include<bits/stdc++.h>
using namespace std;
void palindrome(string str,int n,int m){
    int i=0,j=(int)str.size()-1;
    int zeros=0,ones=0,cnt=0;
    for(int i=0;i<=j;i++){
        if(str[i]=='0'){
            zeros++;
        }else if(str[i]=='1'){
            ones++;
        }else{
            cnt++;
        }
    }
    if(abs(zeros-n)+abs(ones-m)<cnt){
        cout<<-1<<endl;
    }else{
        int a=abs(zeros-n),b=abs(ones-m);
        while(i<j){
            if(str[i]==str[j]){
                if(str[i]=='?' || str[j]=='?'){
                    if(a/2>0){
                        str[i]='0';
                        str[j]='0';
                        a-=2;
                    }else{
                        if(b/2>0){
                            str[i]='1';
                            str[j]='1';
                            b-=2;
                        }
                    }
                }
            }else{
                if(str[i]=='?'){
                    if(str[j]=='0' && a>0){
                        str[i]=str[j];
                        a-=1;
                    }else if(str[j]=='1' && b>0){
                        str[i]=str[j];
                        b-=1;
                    }
                }else if(str[j]=='?'){
                    if(str[i]=='0' && a>0){
                        str[j]=str[i];
                        a-=1;
                    }else if(str[i]=='1' && b>0){
                        str[j]=str[i];
                        b-=1;
                    }
                }
            }
            i++;
            j--;
        }
        int cnt1=0;
        for(char c:str){
            if(c=='?'){
                cnt1++;
            }
        }
        if(cnt1%2==1){
            if(a>0){
                for(char c:str){
                    if(c=='?'){
                        cout<<0;
                    }else{
                        cout<<c;
                    }
                }
            }else if(b>0){
                for(char c:str){
                    if(c=='?'){
                        cout<<1;
                    }else{
                        cout<<c;
                    }
                }
            
            }
        }else{
            if(cnt1!=0){
                cout<<-1;
            }else{
                cout<<str;
            }
        }
    }
    cout<<endl;
}
int main(){
    int t,a,b;string str;cin>>t;while(t--){
        cin>>a>>b>>str;
        palindrome(str,a,b);
    }
}