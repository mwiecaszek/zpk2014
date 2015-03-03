#include <iostream>
using namespace std;

int main() {
    char z1, z2, z;
    int kod1, kod2, a;
    cin >> z1 >> z2;
    kod1 = z1;
    kod2 = z2;
    if (kod2>=65)
        a=(kod1-48)*16+kod2-55;
    else
        a=(kod1-48)*16+kod2-48;
    z = a;
    cout << a << endl;
    cout << z << endl;
}
