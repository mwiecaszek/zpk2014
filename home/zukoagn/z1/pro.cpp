#include <iostream>
 using namespace std;

int main()
{
 int a, b, c;
 int objetosc, pole;
 objetosc=0;
 pole=0;

 cin>> a >> b >> c;

 objetosc= a * b * c;
 pole= 2 * ((a*b) + (b*c) + (a*c));
 cout<<objetosc<<endl;
 cout<<pole<<endl;

}

