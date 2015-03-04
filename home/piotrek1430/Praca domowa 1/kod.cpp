#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if((int)b < (int)'A'){
    cout << ((int)a-(int)'0')*16 + (int)b - (int)'0'  << endl;
    cout << (char)(((int)a-(int)'0')*16 + (int)b - (int)'0') << endl;
        }
    else{
    cout << (int)(a-(int)'0')*16 + (int)b - (int)'A'+10  << endl;
    cout << (char)(((int)a-(int)'0')*16 + (int)b - (int)'A'+10) << endl;
    }
}
