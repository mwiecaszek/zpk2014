#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int g;
    cout << t/3600 << "g" << (t - t/3600 * 3600)/60 << "m" << t%3600%60 << "s" << endl;
}
