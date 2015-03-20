#include <iostream>
#include <string>
using namespace std;

int main() {
    string palindrom;
    cin >> palindrom;
    for (int i = 0; i < palindrom.length(); i++) {
        if (palindrom[i]!=palindrom[palindrom.length()- i - 1]){
            cout << "NIE" << endl;
        return 0;
    }}
    cout << "TAK" << endl;
}
