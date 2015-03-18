#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            a++;
        else
            a = a;
    }
    if (a > 0)
        cout << "zlozona" << endl;
    else
        cout << "pierwsza" << endl;
}
