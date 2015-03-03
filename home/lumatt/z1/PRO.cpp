#include <iostream>
using namespace std;

int main(){

long a,b,c;
cin >> a >> b >> c;

long obj,pole;

obj = a * b * c;
pole = 2 * (a * b + a * c + b * c);

cout << obj << endl;
cout << pole << endl;

cin.get();

return 0;
}

