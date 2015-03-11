#include <iostream>
#include <string>

using namespace std;

int main(){

int n;
cin >> n;
cin.ignore();

int oceny[6] = {0,0,0,0,0,0};
int temp;

for(int i = 1; i <= n; i++){
    cin >> temp;
    oceny[temp-1]++;
}

cout << oceny[0] << " " << oceny[1] << " " << oceny[2] << " " << oceny[3] << " " << oceny[4] << " " << oceny[5];

return 0;

}





