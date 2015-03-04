
#include <iostream>
using namespace std;

int main() {
    
	int t;
	cin>>t;

	cout<< (t-t%3600)/3600<<"g"<<(t%3600-(t%3600)%60)/60<<"m"<<(t%3600)%60<<"s";
	cin>>t;
	getchar();
}

