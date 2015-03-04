#include <iostream>
using namespace std;

int main(){
    int nr_tel, rok_ur;
    cin >> nr_tel >> rok_ur;
    int cyfra = nr_tel%10;
    int koniec = (cyfra*2 + 5)*50 + 1764 - rok_ur;
    cout << koniec << endl;
}
