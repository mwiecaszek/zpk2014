#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n];
    for (int i=0; i<n; i++)
        cin >> t[i];
    for (int z=0; z<n; z+=2)
        cout << t[z] << " " ;
    cout << endl;
    for (int a=1; a<n; a+=2)
        cout << t[a] << " " ;
    cout << endl;
}
