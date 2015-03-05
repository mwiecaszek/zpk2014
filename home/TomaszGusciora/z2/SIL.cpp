#include <iostream>
using namespace std;

int main(){
int x,n;
 x=1;
 cin >> n;
 if (n == 0) x=1;
 else for (int i=1;i<n+1;i++)
 {
     x *= i;
 };
  cout << x << endl;
}
