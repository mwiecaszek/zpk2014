#include <iostream>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;
  int n = a.size(), m = c.size();
  bool wieksza = false, mniejsza = false;

if (n > m)
    wieksza = true;
else if (n < m)
    mniejsza = true;
else if (n == m)
{   if (a[0] > c[0])
        wieksza = true;
    else if (a[0] < c[0])
        mniejsza = true;
    else
    {   for (int i = 0; a[i] == c[i] && i < n - 1; i++)
         if (a[i + 1] > c[i + 1])
            wieksza = true;
        else if (a[i + 1] < c[i + 1])
            mniejsza = true;
    }
}

if ((b == ">" || b == ">=") && wieksza)
    cout << "TAK" << endl;
else if ((b == "<" || b == "<=") && mniejsza)
    cout << "TAK" << endl;
else if ((b == "==" || b == "<=" || b == ">=") && !(mniejsza) && !(wieksza))
    cout << "TAK" << endl;
else if (b == "!=" && (mniejsza || wieksza))
    cout << "TAK" << endl;
else
    cout << "NIE" << endl;

}
