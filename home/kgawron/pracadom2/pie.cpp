#include <iostream>
using namespace std;

int main(){
unsigned int n, x, i;
cin >> n >> x;
unsigned int t[n];

    for (i = 0; i <= n - 1; i++)
    cin >> t[i];

int liczba1 = -1, liczba2 = -1;

    for(i = 0; i <= n - 1; i++)
{
    if (liczba1 == -1 && t[i] == x)
{
liczba1 = i+1;
liczba2 = liczba1;
}
else if (t[i] == x)
liczba2 = i+1;
}
cout << liczba1 << " " << liczba2 << endl;
}
