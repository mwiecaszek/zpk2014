
#include <iostream>
using namespace std;

int main() {
    
	int a,b,c;
	cin>>a>>b>>c;
	int k;
	if(a>=c && b>=c)
		{
			k=(a-a%c)/c;
			b=b-2*c;
			k=k+(b-b%c)/c;
			cout<<2*k;
		}
	else
	cout<<"0";


	cin>>a;
}



