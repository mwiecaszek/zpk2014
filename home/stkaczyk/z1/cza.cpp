#include <iostream>
using namespace std;

int main() {
    int t, g, m, s;
    cin >> t;
    g = t / 3600;
    m = t / 60 - g * 60;
    s = t % 60;

    cout << g << "g" << m << "m" << s << "s" << endl;
}
