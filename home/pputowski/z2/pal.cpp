#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int i = 0;
    bool t = true;
    while( i < n.size() ){
        t = t && ( n[i] == n[ n.size() - 1 - i ] );
        i++;
    }
    if( t )
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}

