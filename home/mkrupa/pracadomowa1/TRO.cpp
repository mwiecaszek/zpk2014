#include <iostream>
using namespace std;

int main() {
       int a, b;
        cin >> a >> b;
        int w = a%10;
        w *= 2;
        w += 5;
        w *= 50;
        w += 1764;
        w -= b;
        cout << w << endl;


}
