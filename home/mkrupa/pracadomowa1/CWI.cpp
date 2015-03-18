#include <iostream>
using namespace std;

int main() {
        int a,b;
        cin >> a >> b;
        if (a>0 && b>0)
            cout << 'I' << endl;
        else if (a<0 & b>0)
            cout << 'II' << endl;
        else if (a<0 & b<0)
            cout << 'III' << endl;
            else
                cout << 'IV' << endl;

}

