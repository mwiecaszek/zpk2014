#include <iostream>
using namespace std;

int main() {
    int tel, ur, w;
    cin >> tel >> ur;

    w = tel % 10;
    w *= 2;
    w += 5;
    w *= 50;
    w += 1764;
    w -= ur;
    cout << w << endl;
}
