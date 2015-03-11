#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a <= c) && (b <= c) && ((a+b) > c))
        cout << "TAK" << endl;
    else if ((a <= b) && (c <= b) && ((a+c) > b))
        cout << "TAK" << endl;
    else if ((c <= a) && (b <= a) && ((c+b) > a))
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}


