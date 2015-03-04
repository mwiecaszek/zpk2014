#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    if (n == 0)
        cout << i << endl;
    else {
        i = 1;
        while (i < n) {
            cout << i << endl;
            i *= 2;
        }
    }
}
