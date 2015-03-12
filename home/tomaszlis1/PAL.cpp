#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	int x=0;
	string s;
	cout << "Podaj wyraz: " << endl;
	cin >> s;
	
	for (int i=0; i < s.length()/2; i++)
	{
		if(s[i] == s[s.length()-i-1])
		{
			x++;
		}
	}
	cout << s.length() << endl;
	if (x >= s.length()/2)
	{
		cout << "TAK" << endl;
	}
	else
	{
		cout << "NIE" << endl;
	}

	getch();


}