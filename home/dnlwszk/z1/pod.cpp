
#include <iostream>
using namespace std;

int main() {
    
	int a,b,c,i,j;
	cin>>a>>b>>c;
	i=a;
	j=0;
	while(i<=b)
	{
		if(i%c==0) j++;
		i++;
	}
	cout<<j;
}


