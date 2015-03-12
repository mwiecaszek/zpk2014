#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool pierwsza = false;

    for(int i = 2; i < n; i++)
        pierwsza = pierwsza || (n % i == 0);

    if(pierwsza)
        cout << "zlozona" << endl;
    else
        cout << "pierwsza" << endl;
}
