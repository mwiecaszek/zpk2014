
#include <iostream>
using namespace std;

int main() {
    
	int a,b;
	cin>>a>>b;

	if(a>0){
		if(b==0) cout<<"OX";
		if(b>0) cout<<"I";	
		if(b<0) cout<<"IV";
	}
	if(a<0){
		if(b==0) cout<<"OX";
		if(b>0) cout<<"II";	
		if(b<0) cout<<"III";
	}
	if(a==0){
		if(b==0) cout<<"0";
		if(b>0) cout<<"OY";	
		if(b<0) cout<<"OY";
	}
	cin>>a;
}

