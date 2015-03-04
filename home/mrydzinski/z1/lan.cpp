#include <iostream>
using namespace std;

int main() {
  int a, b, y;
  cin >> a >> b;
  y = ((a%10) * 2 + 5) * 50 + 1764 - b;
  cout << y << endl;
} 
