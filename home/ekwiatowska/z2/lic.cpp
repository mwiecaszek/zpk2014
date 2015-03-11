#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool pierw=true;
    for (int i=2; i*i<=n; i++){
        if(n%i==0)
            pierw=false;
    }
    if (pierw)
        cout << "pierwsza" << endl;
    else
        cout << "zlozona" <<  endl;



}
