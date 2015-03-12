#include <iostream>
using namespace std;

int main(){
    int k, x;
    string palindrom;
    cin >> palindrom;
    x = palindrom.length();
    for(int k = 0; k < x; k++){
        if(palindrom[x - k - 1] != palindrom[k]){
            cout << " NIE " << endl;
            return 0;
            }
        }
    cout << " TAK " << endl;
}
