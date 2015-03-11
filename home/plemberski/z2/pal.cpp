#include <iostream>
using namespace std;

int main() {
string slowo;
cin >> slowo;
int n = slowo.size();
int a = n/2;

bool palindrom = true;

for (int i = 0; i < a; i++) {
if (slowo[i] != slowo[n-1-i]) {
    palindrom = false;
}
}
if (palindrom == true)
cout << "TAK" << endl;
else
cout << "NIE" << endl;
}
