#include <iostream>
using namespace std;

int main()
{
int a, b, c, d;
cin >> a;

while(a!=0) {
b=a%10;
a=(a-b)/10;
cout << b;
}
}
