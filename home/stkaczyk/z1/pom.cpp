#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int pom = 0;

    while (a != -1) {
        cin >> a;
        if (a > b)
            pom += 1;
        b = a;
    }
    cout << pom << endl;
}
