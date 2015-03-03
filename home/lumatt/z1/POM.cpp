#include <iostream>
#include <cmath>
using namespace std;

int main(){

long liczba = 0;
long pomiar = 0;
long temp = 0;

while(pomiar != -1){
    temp = pomiar;
    cin >> pomiar;
    if(pomiar != 0 && pomiar > temp){
        liczba++;
    }
}

cout << liczba << endl;

cin.get();

return 0;
}




