#include <iostream>
using namespace std;
int main(){
int n, sil;
 sil=1;
 cin >> n;
 if (n == 0) sil=1;
 else for (int i=1;i<n+1;i++)
     sil *= i;
cout << sil << endl;
}
