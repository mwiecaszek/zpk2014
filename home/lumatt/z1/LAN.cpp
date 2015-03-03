#include <iostream>
#include <string>
using namespace std;

int main(){

long nr,rok;
cin >> nr >> rok;

long liczba;

liczba = ((nr % 10) * 2 + 5) * 50 + 1764 - rok;

cout << liczba << endl;

cin.get();

return 0;
}




