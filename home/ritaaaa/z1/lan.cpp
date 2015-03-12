#include <iostream>
using namespace std;

int main()
{
   string tel;
    int urodziny, wynik, i;

    cin>> tel>>urodziny;
    i = tel[8] - 48;


    i=i*2;
    i=i+5;
    i=i*50;
    i=i+1764;
    wynik = i-urodziny;
    cout <<wynik;
    return 0;




}
