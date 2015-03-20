#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 2;
    bool z = false;
    cin >> n;

    while(i*i <= n && z == false) {
        if( n%i == 0) {
            z = 1;
        }
        i = i + 1;
    }

    if( z == false)
        cout << "pierwsza" << endl;
    else
        cout << "zlozona" << endl;

}
