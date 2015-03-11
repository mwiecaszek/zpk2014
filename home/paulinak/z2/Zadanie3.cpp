#include <iostream>
using namespace std;

int main()
{
	int n;
	int x;
	int t[n];
	
	cin >> n >> x;
	
	int pierwszy = -1;
	int ostatni = -1;
	
	for(int i =	0; i < n; i++ )
	{
		cin >> t[i];
			if (pierwszy == -1 && t[i] == x)
				
					pierwszy = i+1;
			
			if (t[i] == x)
				
					ostatni = i+1;
			
	}
	cout << pierwszy << " " << ostatni << endl;
}


