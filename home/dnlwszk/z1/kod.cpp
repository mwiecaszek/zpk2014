
#include <iostream>
using namespace std;

int main() {
    
	int a,c;
	char b;
	cin>>a>>b;		
	if((int)b>64) c=(int)b-55;
	else c=(int)b-48;
	cout<<a*16+c<<endl;
	a=a*16+c;
	cout<<(char)a;
	cin>>a;
}

