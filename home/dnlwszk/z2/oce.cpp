
#include <math.h>

#include <iostream>
using namespace std;

int main() {

    int a;
    cin>>a;

      int* tab= new int[6];
      for(int i=0; i<a; i++)
          tab[i]=0;
    for(int i=0; i<a; i++)
    {
       int k; cin>>k; tab[k-1]++;
    }
    for(int i=0; i<a; i++)
        cout<<tab[i]<<" ";


    return 0;

}

