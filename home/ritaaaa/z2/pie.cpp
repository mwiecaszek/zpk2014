#include <iostream>
using namespace std;

int main(){
int n, x, i;
 cin >> n >> x;
 int a = -1;
 int b = -1;
 unsigned int t[n];
    for (i = 0; i<n; i++)
        cin >> t[i];
    for (i = 0; i <= n - 1; i++)
    {
        if (t[i] == x && a == -1)
        {
            a = i + 1;
            b = a;
        }
        else if (t[i] == x)
            b = i + 1;
    }
    cout << a << " " << b;
}
