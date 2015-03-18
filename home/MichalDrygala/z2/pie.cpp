#include <iostream>
using namespace std;

int main() {
    int n, x, i, x1 = -1, xn = -1;
    cin >> n >> x;
    int t[n];

    for(i = 0; i < n; i++)
        cin >> t[i];

    for(i = 0; i < n && x1 < 0; i++)
    {   if(t[i] == x)
            x1 = i + 1;
    }

     for(i = n - 1; i >= 0 && xn < 0; i--)
     {  if(t[i] == x)
            xn = i + 1;
     }

    cout << x1 << " " << xn;
}
