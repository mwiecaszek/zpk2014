#include <iostream>
using namespace std;
int main(){
int kod_znaku1;
char kod_znaku2;

cin >> kod_znaku1 >> kod_znaku2;

if(kod_znaku2 == 'A' ){
cout << kod_znaku1 * 16 + 10 << endl;
cout << (char)(kod_znaku1 * 16 + 10 ) << endl;}
else if(kod_znaku2 == 'B'){
cout << kod_znaku1 * 16 + 11 << endl;
cout << (char)(kod_znaku1 * 16 + 11) << endl;}
else if(kod_znaku2 == 'C'){
cout << kod_znaku1 * 16 + 12 << endl;
cout << (char)(kod_znaku1 * 16 + 12 )<< endl;}
else if(kod_znaku2 == 'D'){
cout << kod_znaku1 * 16 + 13 << endl;
cout << (char)(kod_znaku1 * 16 + 13 )<< endl;}
else if(kod_znaku2 == 'E'){
cout << kod_znaku1 * 16 + 14 << endl;
cout << (char)(kod_znaku1 * 16 + 14) << endl;}
else{
cout << kod_znaku1 * 16 + 15 << endl;
cout << (char)(kod_znaku1 * 16 + 15) << endl;}
}
