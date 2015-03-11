#include <iostream>
using namespace std;

int main() {
   int pomiar1, pomiar2 = 0, n = 0;
    cin >> pomiar1;

   while (pomiar2 != -1)
   {cin >> pomiar2;
        if (pomiar2 != pomiar1)
        n++;
    pomiar1 = pomiar2;
   }
    cout << n-1;
}
