#include <iostream>


using namespace std;

int main() {
  int n;
  cin>>n;
  int tablica[n];
  for (int i=0;i<n;i++)
  {
      cin>>tablica[i];
  }

  int wynik[6];

  for (int z=0;z<6;z++)
  {
      wynik[z]=0;
  }

  for (int j=0;j<n;j++)
  {
      for (int w=0;w<6;w++)
      {if (tablica[j]==w+1) wynik[w]++;
      }
  }

    for (int g=0;g<6;g++)
        cout<<wynik[g]<<" ";

}
