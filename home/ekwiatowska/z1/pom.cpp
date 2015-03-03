#include <iostream>
using namespace std;

int main() {
    int p1, p2, l;
    cin >> p1;
    cin >> p2;
    l=0;
    while (p1!=-1 && p2!=-1){
     if (p2!=p1)
        l++;
     p1=p2;
     cin >> p2;
    }
    cout << l << endl;
}
