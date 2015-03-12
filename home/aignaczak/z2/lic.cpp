#include <iostream>
using namespace std;

int main(){

    int n;
    bool pie = true;
    cin >> n;

    for(int i = 2; i < n; i++) {
        if (n%i == 0) {
            pie = false;
            break;
        }
        else
            pie;
    }
    if (pie == true)
        cout << "pierwsza";
    else
        cout << "zlozona";
}

