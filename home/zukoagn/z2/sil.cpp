#include <iostream>

using namespace std;

int main()
{
int n, i;
cin>>n;
i=1;
if (n==0)
cout<<1<<endl;
else
{
for(int j=1; j<=n; j++)
i=i*j;

cout<<i<<endl;
}

}
