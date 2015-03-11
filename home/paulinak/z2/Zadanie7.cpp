#include <iostream>
using namespace std;

int main() {
	int n;
	int o;
	int ocena[6]={0, 0, 0, 0, 0, 0};

	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> o;
			ocena[o-1]++;
	}
	for (int j=0; j<6; j++)
		cout << ocena[j] << " ";
}
