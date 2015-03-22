#include <iostream>
#include <string>
using namespace std;

int main() {
    string napis;
    cin >> napis;

    for(int i=0; i<napis.size(); i++){
        if (napis[i] != napis[napis.size()-1-i]){
            cout << "NIE" << endl;
            return 0;
        }
    }
    cout << "TAK" << endl;
}
