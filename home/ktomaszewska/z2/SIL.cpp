
#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int silnia=1;
for(int i=2;i<=n;i++)
{
    silnia=silnia*i;
}
cout<<silnia;
}

