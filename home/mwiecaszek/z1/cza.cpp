#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int g = t / 3600;
    int m = t % 3600 / 60;
    int s = t % 3600 % 60;
    cout << g << "g" << m << "m" << s << "s" << endl;

}
