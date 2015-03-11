#include <iostream>
using namespace std;

int main() {
    int i=0, p = 0, n = 0;
    while (n!=-1){
    if(n > p)
        i++;
    p = n;
    cin >> n;
    }
    cout << i << endl;
}
