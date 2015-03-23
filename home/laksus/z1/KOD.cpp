#include<iostream>

using namespace std;

char znak1, znak2;

int main(){

    cin >> znak1 >> znak2;
    if((int)znak2 >= 65)
        cout << ((int)znak1-48) * 16 + ((int)znak2 - 55) << endl << (char)(((int)znak1-48)*16 + ((int)znak2 - 55) ) << endl;
    else
        cout << ((int)znak1-48) * 16 + ((int)znak2 - 48) << endl << (char)(((int)znak1-48)*16 + ((int)znak2 - 48) ) << endl;
}
