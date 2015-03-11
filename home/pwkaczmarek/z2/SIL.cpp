#include <iostream>
using namespace std;

int main(){
    short unsigned int n;
    unsigned int wynik = 1;
    cin >> n;
    for(short int i = 1; i <= n; i++){
        wynik *= i;
    }
    cout << wynik << endl;
}
