

#include <math.h>

#include <iostream>
using namespace std;

int dzielnik(int i, int j){

    while(i!=j){

        if(i<j)
            j-=i;
        else
            i-=j;
    }


    return i;
}

int main() {

    int a;
    cin>>a;
    int c=0;
      int* tab= new int[a];
      for(int i=0; i<a; i++)
          tab[i]=0;
    for(int i=0; i<a; i++)
    {
       int k; cin>>k; tab[i]=k; if(i>0)c=dzielnik(tab[i-1],tab[i]);

    }

        cout<<c;


    return 0;

}
