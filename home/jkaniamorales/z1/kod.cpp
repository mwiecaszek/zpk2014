#include<iostream>
using namespace std;

int main(){

    char cyfra, bycmozelitera;
    cin >> cyfra >> bycmozelitera;
    /*
    cout << cyfra << bycmozelitera << endl;
    cout << (int)cyfra << " " << (int)bycmozelitera << endl;
    */
    int ascii, pierwsza_skladowa, druga_skladowa;
    pierwsza_skladowa = (int)cyfra - 48;
    if (bycmozelitera=='A')
        druga_skladowa = 10;
    else if (bycmozelitera=='B')
        druga_skladowa = 11;
    else if (bycmozelitera=='C')
        druga_skladowa = 12;
    else if (bycmozelitera=='D')
        druga_skladowa = 13;
    else if (bycmozelitera=='E')
        druga_skladowa = 14;
    else if (bycmozelitera=='F')
        druga_skladowa = 15;
    else
        druga_skladowa = (int)bycmozelitera - 48;

    ascii= 16 * pierwsza_skladowa + druga_skladowa;

    cout << ascii << endl << (char)ascii;

}
