#include <iostream>
#include <cmath>

using namespace std;

int main(){

long long liczba;
cin >> liczba;

for(int i=0; i < 60; i++){
    if(liczba == pow(2,i)){
        cout << "TAK" << endl;
        return 0;
    }
}
cout << "NIE" << endl;

cin.get();

return 0;
}






