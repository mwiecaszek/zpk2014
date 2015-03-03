#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a*b*c << endl
         << 2*(a*b+b*c+a*c) << endl;
}
