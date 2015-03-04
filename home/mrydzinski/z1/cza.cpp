#include <iostream>
using namespace std;

int main() {
    int t;
    cin  >> t;
    cout << t/(60 * 60) << "g" << (t%3600)/60 << "m" << t%60 << "s" << endl;
}
