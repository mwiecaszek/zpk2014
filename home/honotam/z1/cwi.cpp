#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > 0)
    {
        if (y > 0)
            cout << "I" << endl;
        else if (y < 0)
            cout << "IV" << endl;
        else
            cout << "OX" << endl;
    }
    else if (x < 0)
    {
        if (y > 0)
            cout << "II" << endl;
        else if (y < 0)
            cout << "III" << endl;
        else
            cout << "OX" << endl;
    }
    else /* czyli jak x = 0 */
    {
        if (y == 0)
            cout << "0" << endl;
        else
            cout << "OY" << endl;
    }
}
