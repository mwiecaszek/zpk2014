#include <iostream>
using namespace std;

int main() {
    int przed = 0, teraz = 0, i = 0;
    while( teraz != -1 )
        {
        cin >> teraz;
        if( teraz > przed)
            i++;
        przed = teraz;
        }
    cout << i << endl;
}
