#include <iostream>
using namespace std;

int main() {
unsigned int a, b, k, x;

cin >> a >> b >> k;
    if (a%k == 0)
x = b/k - a/k + 1;
    else
x = b/k - a/k;
cout << x << endl;
}
