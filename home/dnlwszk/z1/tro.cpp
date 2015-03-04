
#include <iostream>
using namespace std;

int main() {
    
	int a,b,c;
	cin>>a>>b>>c;

	((a>=b && a>=c && b+c>a) ||(b>=c && b>=a && a+c>b ) ||(c>=b && c>=a && b+a>c ))  ? cout<<"TAK" : cout<<"NIE";
	
	cin>>a;
}


