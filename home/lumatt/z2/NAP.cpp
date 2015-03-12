#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;
cin.ignore();

int tab[n-1];

for(int i = 0; i < n; i++){
    cin >> tab[i];
}

for(int i = 0; i < n; i=i+2){
    cout << tab[i] << " ";
}

cout << endl;

for(int i = 1; i < n; i=i+2){
    cout << tab[i] << " ";
}

return 0;

}
