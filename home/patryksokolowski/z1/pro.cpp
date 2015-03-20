#include <iostream>
using namespace std;

int main(){
int a;
int b;
int c;

cin >> a >> b >> c;

int objetosc=a*b*c;
int pole=a*b*2+a*c*2+b*c*2;
cout << objetosc << "\n" << pole;
}
