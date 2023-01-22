#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string str;cin>>str;
	bool ok=true;
	for(int i=0;i<str.size();i++){
	    if(str[i]=='x'){
	        ok=false;
	    }
	}
	if(!ok){
	    cout<<"Not Safe\n";
	}else{
	    cout<<"Safe\n";
	}
	return 0;
}
