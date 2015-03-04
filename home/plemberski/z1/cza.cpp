#include <iostream>
using namespace std;

int main() {
    int a, g, m, s;
    cin >> a;
    g = a/3600;
    m = (a % 3600) / 60;
    s = (a % 3600) % 60;
    cout << g << "g" << m << "m" << s << "s" << endl;
}


