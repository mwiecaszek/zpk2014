
#include <iostream>
using namespace std;

int main() {
    
	int a,b,i;
	b=0;
	i=0;
	while(a!=-1)
	{
		cin>>a;
		if(b!=a) i++;

		b=a;


	}
	cout<<i-1;
}

