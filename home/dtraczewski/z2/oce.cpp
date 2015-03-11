#include <iostream>
using namespace std;

int main() {
    unsigned short n, ocena;
    cin >> n;
    unsigned short t[6] = {};
    for(unsigned short i = 0; i < n; i++){
        cin >> ocena;
        for(unsigned short j = 0; j < 6; j++){
            if (ocena == j + 1)
                t[j]++;
        }
    }
    for(unsigned short i = 0; i < 6; i++)
        cout << t[i] << " ";
    cout << endl;
}
