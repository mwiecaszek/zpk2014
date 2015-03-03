#include <iostream>
using namespace std;

int main() {
    unsigned int numer;
    short int a;
    cin >> numer >> a;
    cout << ((numer % 10) * 2 + 5) * 50 + 1764 - a << endl;

}
