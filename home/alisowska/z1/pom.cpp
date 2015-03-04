#include <iostream>
using namespace std;

int main() {
int ile, i, a;
i=0;
ile=-1;
a=i;
while(i!=-1)
      {
    cin >>i;
    if(a!=i){
            ile++;
            a=i;

}}
cout << ile <<endl;
}
