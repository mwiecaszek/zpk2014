#include <iostream>
using namespace std;

int main() {
    unsigned short n;
    cin >> n;
    int silnia = 1;
    for (unsigned short i = 2; i <= n; i++)
        silnia *= i;
    cout << silnia << endl;
}
