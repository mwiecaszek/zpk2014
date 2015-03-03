#include <iostream>
using namespace std;

int main() {
   int a, b, k;
   cin >> a >> b >> k;
   if (a%k==0 && b%k==0)
    cout << (b-a)/k+1 << endl;
   else if (a%k==0 && b%k!=0)
    cout << ((b/k*k)-a)/k+1 << endl;
   else if (a%k!=0 && b%k==0)
    cout << (b-((1+a/k)*k))/k+1 << endl;
   else
    cout << ((b/k*k)-((1+a/k)*k))/k+1 << endl;
}
