#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin  >> a >> b >> c;
    cout << a * b * c << endl
         << a * b * 2 + a * c * 2 + c * b * 2 << endl;
}
