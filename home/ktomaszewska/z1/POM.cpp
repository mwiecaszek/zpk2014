#include <iostream>
using namespace std;

int main() {
    int suma=0;
    int a=0;
    int b=0;
while (a!=-1)
{
    cin>>a;
    if (a!=b) {suma++;}
    b=a;

}
cout<<suma-1;
}

