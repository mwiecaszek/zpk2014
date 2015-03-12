#include <iostream>
using namespace std;

int main() {
   int a, b, k;
   cin >> a >> b >> k;
   b = b / k - (a + k - 1) / k + 1;
   cout << b << endl;
}
