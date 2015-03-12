#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
        cin >> t[i];

    int oceny[6];
    for (int i = 0; i < 6; i++)
        oceny[i] = 0;

    for (int i = 0; i < n; i++) {
        switch (t[i]) {
        case 1:
            oceny[0]++;
            break;
        case 2:
            oceny[1]++;
            break;
        case 3:
            oceny[2]++;
            break;
        case 4:
            oceny[3]++;
            break;
        case 5:
            oceny[4]++;
            break;
        case 6:
            oceny[5]++;
            break;
        }
    }

    for (int i = 0; i < 6; i++)
        cout << oceny[i] << " ";
}
