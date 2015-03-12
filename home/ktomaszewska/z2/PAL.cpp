#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string napis;
    cin>>napis;
    int n = napis.size();
    bool pal=true;

    for (int i=0;i<n/2;i++)
    {
        if (napis[i]!=napis[n-i-1]) pal=false;
    }


  if (pal==true) cout<<"TAK";
   else cout<<"NIE";
}
