#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    cin >> a;

        while (a%10 == 0) {
         a /= 10;}
                while (a != 0){

                        cout << a % 10;
                        a /= 10;
                }

        }


