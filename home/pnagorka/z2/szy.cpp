#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    unsigned short klucz, k, i;
    string tekst;

    cin >> klucz >> k >> tekst;

    if (klucz == 1)
    {
        for (i = 0; i < tekst.length(); i++)
        {
            if (tekst[i] >= 65 && tekst[i] <= 90)
                tekst[i] = (tekst[i] - 65 + k) % 26 + 65;
            else if (tekst[i] >= 97 && tekst[i] <= 122)
                tekst[i] = (tekst[i] - 97 + k) % 26 + 97;
        }
    }
    else if (klucz == 2)
    {
        for (i = 0; i < tekst.length(); i++)
        {
            if (tekst[i] >= 65 && tekst[i] <= 90)
                tekst[i] = (tekst[i] - 65 + 26 - k) % 26 + 65;
            else if (tekst[i] >= 97 && tekst[i] <= 122)
                tekst[i] = (tekst[i] - 97 + 26 - k) % 26 + 97;
        }
    }

    cout << tekst << endl;
}
