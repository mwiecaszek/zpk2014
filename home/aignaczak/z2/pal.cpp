#include <iostream>
#include <cstring>
using namespace std;

int main(){

    string word;
    cin >> word;
    int dlugosc = word.length();
    int k = 1;

    for(int i = 0; i < dlugosc / 2; i++){
        if (word[i] != word[dlugosc - 1 - i]) {
            k = 0;
            break;
        }
        else ;
    }
    if (k == 1) cout << "TAK";
    else cout << "NIE";
}

