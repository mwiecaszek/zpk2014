#include <iostream>
using namespace std;

int main()  {
    unsigned int a, b, c, obj, ppow;
    cin >> a >> b >> c;
    obj = a*b*c;
    ppow = 2*(a*b + a*c + b*c);
    cout << obj << endl << ppow << endl;
}
