#include<iostream>
using namespace std;

int main(){

    int telefon, data;
    cin >> telefon >> data;
    cout << (telefon%10 *2 + 5)*50 + 1764 - data;

}
