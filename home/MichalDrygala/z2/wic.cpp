#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n];

    for (int i = 0; i < n; i++)
    {   cin >> t[i];
    }

    int mistrz = 0;
    int wice = 0;

    for (int i = 0; i < n; i++)
    {   if (t[i] > mistrz)
        {   wice = mistrz;
            mistrz = t[i];
        }
        else if (t[i] > wice)
            wice = t[i];
    }

    cout << wice;
}
