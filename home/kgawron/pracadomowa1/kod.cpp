#include <iostream>
using namespace std;

int main(){
char x;
char y;

cin>>x>>y;

int w;
int z;

x=int(x)-48;

switch(y){

    case 'A':
    z = 10;
    break;

    case 'B':
    z = 11;
    break;

    case 'C':
    z = 12;
    break;

    case 'D':
    z = 13;
    break;

    case 'E':
    z = 14;
    break;

    case 'F':
    z = 15;
    break;

    default:
    z = int(y)-48;
    break;
}
            w = 16*x+z;
            cout<<w<<endl<<char(w);
}
