
#include <math.h>

#include <iostream>
using namespace std;

int prawiemax(int* tab, int k, int n){
        int j=-1;
    for(int i=0; i<n; i++)
     if(tab[i]>j && tab[i]!=k) j=tab[i];

    return j;


}


int main() {

    int a;
    cin>>a;

      int* tab= new int[a];




    for(int i=0; i<a; i++)
    {

      int k; cin>>k; tab[i]=k;
    }


      cout<<prawiemax(tab,prawiemax(tab,-1,a),a);


    return 0;

}
