#include <iostream>
using namespace std;

int main(){

char char_tab[2];
cin >> char_tab;

int first = int(char_tab[0]) - 48;
char second = char_tab[1];

int liczba;
char znak;

if(int(second)<58){
    liczba = 16 * first + int(second) - 48;
}else{
    liczba = 16 * first + int(second) - 55;
}

znak = char(liczba);

cout << liczba << endl;
cout << znak << endl;

cin.get();

return 0;
}





