#include <iostream>
using namespace std;

int main() {
   int tel, wiek;
   cin >> tel >> wiek;
   int n = ((2 * (tel % 10) + 5) * 50) + 1764 - wiek;
    cout << n << endl;
}
