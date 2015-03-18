#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sil=1;
    for (int i=1; i<=n; i++)
        sil=sil*i;
    cout << sil << endl;
}
