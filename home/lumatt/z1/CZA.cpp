#include <iostream>

using namespace std;

int main(){

long time;

cin >> time;

long godzina;
int minuta, sekunda;

godzina = time / 3600;
minuta = (time - godzina * 3600) / 60;
sekunda = time - godzina * 3600 - minuta * 60;

cout << godzina << "g" << minuta << "m" << sekunda << "s" << endl;

cin.get();

return 0;
}

