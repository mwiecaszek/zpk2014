
#include <iostream>
using namespace std;

int main() {
    
	int n,k,j;
	cin>>n;

	int i=1;
	k=n;
	while(i<=n)
	{
		
		i=10*i;
		if(k%i >0) cout<<k%i;
		k=(k-k%i)/i;
		
	}

	cin>>n;
}

