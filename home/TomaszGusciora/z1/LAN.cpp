#include <iostream>
using namespace std;

int main(){
int nr,rok;
cin >> nr >> rok;
cout << ((nr % 10) * 2 + 5) * 50 + 1764 - rok << endl;
}
