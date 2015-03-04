#include <iostream>
 using namespace std;

 int main(){
 int a,b,k;

 cin >> a >> b >> k;
 if ((a % k)!=0 || (b % k)!=0 )

 cout << ((a/k)*(b/k))- ((a/k-2)*(b/k-2)) << endl;
 else
 cout << ((a/k)*(b/k)) << endl;

 }
