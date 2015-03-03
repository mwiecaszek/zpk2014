#include <iostream>
using namespace std;

int main(){
char char_tab[2];
cin >> char_tab;
int pierwszy = int(char_tab[0]) - 48;
char drugi = char_tab[1];
int liczba;
char znak;
if(int(drugi)<58){
    liczba = 16 * pierwszy + int(drugi) - 48;
}else{
    liczba = 16 * pierwszy + int(drugi) - 55;
}
znak = char(liczba);
cout << liczba << endl;
cout << znak << endl;
}
