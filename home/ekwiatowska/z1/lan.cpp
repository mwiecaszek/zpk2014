#include <iostream>
using namespace std;

int main() {
    int t, r, w;
    cin >> t >> r;
    w=((t%10)*2+5)*50+1764-r;
    cout << w << endl;
}


