#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i=0;
    while (2*i < n)
    {
    if (i==0) {
         cout << 1 << endl;
            i=i+1;
    }
    else {
        cout << 2*i << endl;
            i=i*2;
    }
    }


}
