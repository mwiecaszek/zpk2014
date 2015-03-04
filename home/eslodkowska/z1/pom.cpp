#include<iostream>
using namespace std;

int main() {
    int n = 0, a = 0, suma = 0;
    while (n != -1) {
        cin >> n;
        if (n != a) {
            suma++;
            a = n;
        }
    }
    cout << suma - 1 << endl;
}
