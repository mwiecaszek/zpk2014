#include <iostream>
using namespace std;

int main()
{

    int n;
        cin >> n;

    bool liczba= true;

    for (int i=2; i*i <= n; i++)
    {
        if(n%i == 0)
            liczba = false;
        
    }

    if(liczba)
        cout << "pierwsza" << endl;

    else
        cout << "zlozona" << endl;

}

