#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a+b)<=c)
        cout << "NIE" << endl;
    else if ((a+c)<=b)
        cout << "NIE" << endl;
    else if ((b+c)<=a)
        cout << "NIE" << endl;
    else
        cout << "TAK" << endl;
}
