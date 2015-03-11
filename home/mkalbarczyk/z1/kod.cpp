#include <iostream>
using namespace std;

int main(){

char a;
char b;

cin>>a>>b;

int wynik;
int drugi;

a=int(a)-48;

switch(b){
case 'A':
   drugi = 10;
   break;
case 'B':
    drugi = 11;
    break;
case 'C':
    drugi = 12;
    break;
case 'D':
    drugi = 13;
    break;
case 'E':
    drugi = 14;
    break;
case 'F':
    drugi = 15;
    break;
default:
    drugi = int(b)-48;
    break;
}
wynik = 16*a+drugi;
cout<<wynik<<endl<<char(wynik);


}
