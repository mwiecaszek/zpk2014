#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    cin >> x;
    int t[n];
    int licznik=0;
    int licznik1=0;
    int licznik2=0;

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

   for (int j = 0; j < n; j++)
    {
        if (t[j]==x) licznik++;
    }

   if (licznik==0)
  cout<<-1<<" "<<-1;
  else
  {
      for(int p=0;t[p]!=x;p++)
        licznik1++;


  {
      for(int d=n-1;t[d]!=x;d--)
        licznik2++;
  }

  cout<<licznik1+1<<" "<<n-licznik2;
  }
}
