#include <iostream>
using namespace std;

int main(){
    string slowo;
    bool pomoc = true;
    cin >> slowo;
    unsigned int dlugosc = slowo.length();
    for(int i = 0; i < dlugosc; i++){
        if(slowo[i] != slowo[dlugosc - 1 - i]){
            cout << "NIE" << endl;
            pomoc = false;
            break;
        }
    }
    if(pomoc)
        cout << "TAK" << endl;
}
