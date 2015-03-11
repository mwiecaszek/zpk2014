

#include <iostream>
using namespace std;

int main() {

    int a;

    cin>>a;
    int* tab =new int[a];
    for(int i=0;i<a;i++)
       {int k; cin>>k; tab[i]=k;}
   for(int i=0;i<a;i++)
        if(i%2==0)  cout<<tab[i]<<" ";
    cout<<endl;
    for(int i=0;i<a;i++)
        if(i%2==1)  cout<<tab[i]<<" ";
    return 0;

}
