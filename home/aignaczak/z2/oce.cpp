#include <iostream>
using namespace std;

int main () {
    int n;

    cin >> n;
    int t[n];
    int o1, o2, o3, o4, o5, o6;
    o1 = 0;
    o2 = 0;
    o3 = 0;
    o4 = 0;
    o5 = 0;
    o6 = 0;

    for(int i = 0; i < n; i++)
        cin >> t[i];

    for(int i = 0; i < n; i++) {
        if (t[i] == 1)
            o1++;
        else if (t[i] == 2)
            o2++;
        else if (t[i] == 3)
            o3++;
        else if (t[i] == 4)
            o4++;
        else if (t[i] == 5)
            o5++;
        else
            o6++;
    }
    cout << o1 << o2 << o3 << o4 << o5 << o6;

}
