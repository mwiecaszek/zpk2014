#include <iostream>
using namespace std;

int main()
{

int a, b;
string znak;
 cin >> a>> znak >> b;

 if ((a==b && znak=="==") || (a>b && znak==">") || (a<b && znak=="<") || (a!=b && znak=="!=") || (a<=b && znak=="<=")|| (a>=b && znak==">="))
 {cout<< "TAK";
 }
 else
 cout<< "NIE";

}
