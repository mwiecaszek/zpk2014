#include <iostream>
using namespace std;

int main() {
    int a, b, w;
    cin >> a >> b;
    w = 0;
    w = a%10 *2;
    w += 5;
    w *= 50;
    w += 1764;
    w -= b;
    cout << w << endl;
}
