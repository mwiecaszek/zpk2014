#include <iostream>

using namespace std;

int main()
{
    int n;

   int d, i;
    cin>>n;

    d=0;
    i=1;
    while(i*i<=n)
    {
        if((n%i==0)&&(i!=1))
        {
            d=1;
            cout<<"zlozona"<<endl;
            break;

        }
         i++;

    }

    if (d==0)
        cout<<"pierwsza"<<endl;


}
