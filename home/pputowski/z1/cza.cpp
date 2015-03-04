#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cout << t / 60 / 60 << "g"
         << t / 60 - t / 60 / 60 * 60 << "m"
         << t - ( t / 60 - t / 60 / 60 * 60 ) * 60 - t / 60 / 60 * 60 * 60 << "s" << endl;
}

