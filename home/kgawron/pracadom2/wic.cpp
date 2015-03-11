#include <iostream>
using namespace std;
int najwieksza_mniejsza(int t[], int m, int x){
int wicemistrz = 0;
    for(int i = 0; i < x; i ++){
    if(t[i] < m && t[i] > wicemistrz)
        wicemistrz = t[i];
}
    return wicemistrz;
}
int main(){
int y, m = 0, wicemistrz;
cin >> y;
int t[y];
    for(int i = 0; i < y; i++){
cin >> t[i];
    if(t[i] > m)
        m = t[i];
}
    wicemistrz = najwieksza_mniejsza(t, m, y);
    cout << wicemistrz << endl;
}
