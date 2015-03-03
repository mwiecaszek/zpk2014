#include <iostream>
using namespace std;

int main() {
    int t, g, m, s;
   cin>>t;
    g=t/3600;
    m=(t % 3600)/60;
    s=t-3600*g-60*m;
   cout<<g<<"g"<<m<<"m"<<s<<"s"<<endl;


}
