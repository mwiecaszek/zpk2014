#include <iostream>
#include <cmath>

using namespace std;

int main(){

int k;
cin >> k;
cin.ignore();

int x;

int suma = 0;

for(int i = 0; i < k + 1; i++){
    cin >> x;
    suma = suma + pow(2,i)*x;
}

cout << suma + 1;

return 0;

}


