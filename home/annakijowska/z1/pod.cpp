#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int wynik=0;

    for (int i=a;i<=b;1)
    {
      if (i%k == 0)
        wynik=wynik+1;
    i++;
    }
    cout << wynik << endl;

}
