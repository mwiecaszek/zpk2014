#include <iostream>
using namespace std;

int main() {
   char a, b;
   cin >> a >> b;

   a = (a - 48) * 16;
   if (b < 58)
    a += b - 48;
   else
    a += b - 55;

   cout << (int)a << endl << (char)a << endl;
}
