#include <iostream>
using namespace std;

int main(){

int sekundy;
cin >> sekundy;

cout << sekundy/3600 << "g" <<  (sekundy % 3600) / 60 << "m" << (sekundy % 3600) % 60 << "s" << endl;
}
