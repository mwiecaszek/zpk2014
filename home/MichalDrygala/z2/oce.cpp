#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int t[n];

  for(int i = 0; i < n; i++)
    cin >> t[i];

  for(int i = 1; i <= 6; i++)
  { int a = 0;
    for(int j = 0; j < n; j++)
        if(i == t[j])
        a += 1;
    cout << a << " ";
  }
}
