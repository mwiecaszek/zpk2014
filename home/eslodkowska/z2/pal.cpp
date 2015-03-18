#include<iostream>
#include<string>
using namespace std;

int main() {
    string wyraz, wyraz2;
    cin >> wyraz;
    int a = wyraz.length();
    for (int i = 0; i < a; i++)
        wyraz2 += wyraz[a - i - 1];
    if (wyraz == wyraz2)
        cout << "TAK";
    else
        cout << "NIE" << endl;
}
