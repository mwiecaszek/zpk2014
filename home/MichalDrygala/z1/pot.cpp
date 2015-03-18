#include <iostream>
using namespace std;

int main()
{   int n, pot = 1;
    cin >> n;

    while (pot <= n)
    {   cout << pot << endl;
        pot *= 2;
    }
}
