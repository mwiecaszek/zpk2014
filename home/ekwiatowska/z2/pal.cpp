#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    bool palindrom=true;
    int w=n.size();
    for (int i=0; i<=w/2-1; i++){
        if (n[i]!=n[w-1-i])
            palindrom=false;
    }
    if (palindrom)
        cout << "TAK" << endl;
    else
        cout << "NIE" <<  endl;



}
