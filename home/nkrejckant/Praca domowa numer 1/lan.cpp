#include <iostream>
using namespace std;

int main(){
int numer_tel, rok_ur;

cin >> numer_tel >> rok_ur;
int w = numer_tel % 10; /*ostatnia cyfra numeru telefonu*/
w*=2;
w+=5;
w*=50;
w+=1764;
w-=rok_ur;
cout << w << endl;
}
