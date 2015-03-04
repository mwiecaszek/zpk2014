
#include <iostream>
using namespace std;

int main() {
    
	int a;
	cin>>a;

	int i=0;
	while(2^i<=a)
	{
		i=2^i;
		cout<<i<<endl;
	}
}



