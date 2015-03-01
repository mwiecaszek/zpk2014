#include <iostream>
using namespace std;

int main()
{
    int poprzedni, aktualny;
    unsigned int wyjscie = 0;

    cin >> poprzedni;

    while (aktualny != -1)
    {
        cin >> aktualny;

        if (aktualny > poprzedni)
            wyjscie++;

        poprzedni = aktualny;
    }

    cout << wyjscie << endl;
}
