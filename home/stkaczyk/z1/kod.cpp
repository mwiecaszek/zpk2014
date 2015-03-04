#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;

    int x, y;
    x = a - 48;

    if (b>='0' && b<='9')
        y = b - 48;
    else if (b>='A' && b<= 'F')
        y = b - 55;

    int kod = x*16 + y;

    cout << kod << endl << char(kod) << endl;
}
