#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int wynik = 0;

    //2^n zaczyna sie powtarzac 1 , 2 , 4 ,8 ,  6  , 2 , 4 ,8
    //                          0   1   2   3   4   5   6  7
    if (n == 0)
        wynik = 1;
    else if (n % 4 == 1)
        wynik = 2;
    else if (n % 4 == 2)
        wynik = 4;
    else if (n % 4 == 3)
        wynik = 8;
    else if (n % 4 == 0)
        wynik = 6;

    cout << wynik << endl;

}
