#include <iostream>
using namespace std;
int silnia(int n) {
	if (n)
		return n * silnia(n-1);
	return 1;
}
int main()
{
int a;
cin >> a;
cout<<silnia(a)<<endl;
}


