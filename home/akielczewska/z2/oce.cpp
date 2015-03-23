#include <iostream>
using namespace std;

main(){
    int n, x;
    cin >> n;
    int t[6] = {0,0,0,0,0,0};
    for (int i = 1; i <= n; i++) {
        cin >> x;
        t[x-1]++;
    }
    for (int j = 0; j < 6; j++) {
        cout << t[j] << " ";
    }
}
