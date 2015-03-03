#include <iostream>
using namespace std;

int main(){

long a,b;
cin >> a >> b;

long maks;

maks = (a < b) ? b : a;

cout << maks << endl;

cin.get();

return 0;
}

