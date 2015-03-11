#include <iostream>
using namespace std;

int main(){
    unsigned int n, ocena = 0;
    unsigned int wykaz[6];
    for(int i = 0; i < 6; i++)
        wykaz[i] = 0;
    cin >> n;
    for(unsigned int i = 0; i < n; i++){
        cin >> ocena;
        wykaz[ocena - 1]++;
    }
    for(unsigned int i = 0; i < 6; i++)
        cout << wykaz[i] << " ";
    cout << endl;
}
