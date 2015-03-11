#include <iostream>
#include <sstream>
using namespace std;

int main(){

int numer,rok;
cin>>numer>>rok;

int cyfra=numer%10;
int wynik= (cyfra*2+5)*50+1764-rok;
cout<<wynik;


}
