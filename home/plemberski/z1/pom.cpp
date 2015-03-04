#include <iostream>
using namespace std;

int main() {
   int a = 0;
   int b = 0;
   int licznik = 0;
            while(a!=-1){
    cin >> a;
    if(a!=b)
    licznik++;
    b = a;
    }
    cout << licznik - 1;
}
