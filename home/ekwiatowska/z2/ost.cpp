#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[4]={2,4,8,6};

    if (n==0)
        cout << 1 << endl;
    else {
        while (n>4){
            n=n-4;
        }
        cout << t[n-1] << endl;
    }
}
