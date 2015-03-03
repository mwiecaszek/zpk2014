#include <iostream>
 using namespace std;

int main()
{

 int telefon, rok;
 int ost_liczba, a;//zmienne pomocnicze

 cin>>telefon>>rok;

 ost_liczba=telefon%10;
 a=(((ost_liczba*2)+5)*50+1764)-rok;

 cout<<a<<endl;

}
