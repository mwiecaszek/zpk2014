#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int obj = a*b*c;
    int p_pow = 2*(a*b + a*c + b*c);
    cout << obj << endl
    << p_pow << endl;
}
