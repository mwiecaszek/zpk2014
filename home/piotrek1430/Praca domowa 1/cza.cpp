#include <iostream>
using namespace std;

int main() {
    long int a;
    cin >> a;
    cout  << a / 3600<< "g" << (a - (a / 3600) * 3600)/60 << "m" << (a - (a / 3600) * 3600  )%60 << "s"  << endl;
}
