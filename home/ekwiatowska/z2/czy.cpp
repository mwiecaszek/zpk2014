#include <iostream>
using namespace std;

int main() {
    long long i;
    cin >> i;
    while (i>=2){
        if (i%2==0)
            i=i/2;
        else
            i=0;
    }
    if (i==0)
        cout << "NIE" << endl;
    else
        cout << "TAK" << endl;

}
