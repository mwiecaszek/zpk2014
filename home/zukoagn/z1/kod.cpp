#include <iostream>
 using namespace std;

int main()
{
 int aa;
 char a, b;
 int kod, liczba;
 char znak;
 cin>>a>>b;
aa=a;
aa=a-48;
if((b!='A')&&(b!='B')&&(b!='C')&&(b!='D')&&(b!='E')&&(b!='F'))
{
 liczba=b;
liczba=b-48;
}
else
{
if(b=='A') liczba=10;
 if(b=='B') liczba=11;
 if(b=='C') liczba=12;
 if(b=='D') liczba=13;
 if(b=='E') liczba=14;
 if(b=='F') liczba=15;
}
 kod=aa*16+liczba;
 znak=kod;
 cout<<kod<<endl;
 cout<<znak<<endl;



}
