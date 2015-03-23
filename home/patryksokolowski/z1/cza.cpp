#include <iostream>
using namespace std;

int main(){
int sekundy;
cin >> sekundy;

int minuty=sekundy/60;
int godziny=minuty/60;
sekundy=sekundy-60*minuty;
minuty=minuty-60*godziny;

cout << godziny << "g" << minuty << "m" << sekundy << "s";
}
