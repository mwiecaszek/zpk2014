#include <iostream>
using namespace std;

int main() {
        int a = 1;
        int n;
        cin >> n;
        while (a <= n) {
            a *= 2;
            if (a <= n)
            cout << a << endl;
            else
            cout << "" << endl;


        }

}
