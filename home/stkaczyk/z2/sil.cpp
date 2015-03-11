#include <iostream>
using namespace std;

int main() {
    long long int x, y = 1;
    cin >> x;
    for (int i = 1; i <= x; i++)
        y *= i;
    cout << y << endl;
}
