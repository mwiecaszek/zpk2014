#include<iostream>
#include <string>
using namespace std;
 
int main()
{
	string pal;
	int j=0;
	cin >> pal;
	int k = pal.length();
	for(int i=0;i<k/2+1;i++)
		if(pal[i]==pal[k-i-1]){
		j++;
		}
	if(j==k/2+1){
		cout << "TAK";
	}
	else
		cout << "NIE";		
}
