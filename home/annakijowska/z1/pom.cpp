#include <iostream>
using namespace std;

int main() {
   int a=0;
   int b=0;
   int pomiary=0;

   while(a!=-1){
   cin >> a;
   if(a!=b)
   pomiary = pomiary + 1;
   b = a;
   }
    cout << pomiary - 1;
}
