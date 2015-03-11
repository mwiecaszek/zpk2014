#include <iostream>
using namespace std;

int main () {
    int n;

    cin >> n;
    int t[n];

    for(int i = 0; i < n; i++)
        cin >> t[i];

    for(int i=0; i < n - 1; i++){
        cout << t[i] << " ";
        i++;
    }
    cout << endl;
    for(int i=1; i < n; i++){
        cout << t[i] << " ";
        i++;
    }


}
