#include <iostream>
using namespace std;

int main() {
    unsigned int i, b;
    b=0;
    cin >> i;
    while(i != 1 && i!=3 ){
    if (i % 2 == 0){
    i = i / 2;}
    else
    {
    i = 3*i + 3;
    }
    }
    if(i==1){cout << "TAK";} else {cout << "NIE"; }
}
