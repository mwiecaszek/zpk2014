#include<iostream>
#include <cmath>
using namespace std;
 
bool lic(int n)
{
  int m=sqrt(n);
  if(n<2)
    return false;
  for(int i=2;i<=m;i++)
    if(n%i==0)
      return false;
  return true;
}
 
int main()
{
  int n;
  cin >> n;
  if(lic(n)==1)
    cout<< "pierwsza" <<endl;
  else
    cout<< "zlozona" <<endl;
  system("pause");
  return 0;
}
