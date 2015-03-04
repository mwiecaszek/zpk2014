#include <iostream>
using namespace std;

int main()
{
    int n;
    int t;
		t = 0;

    cin >> n;

    while (n!= 0)
    {
        t *=10;
        t+= n%10;
        n /=10;
    }

    cout << t << endl;

}
