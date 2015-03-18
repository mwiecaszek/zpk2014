#include <iostream>
using namespace std;

int main() {
    int n, o;
    int oce[6]={0, 0, 0, 0, 0, 0};
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> o;
        oce[o-1]++;
    }
    for (int j=0; j<6; j++)
        cout << oce[j] << " ";
}
