#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool czyPierwsza = true;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
          czyPierwsza = false;
          break;
        }
    }
    if (czyPierwsza)
        cout << "pierwsza" << endl;
    else
        cout << "zlozona" << endl;
}
