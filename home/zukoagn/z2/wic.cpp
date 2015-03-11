#include <iostream>
#include<algorithm>

using namespace std;


int main()
{
int n, a, b,x, p, d,k;

p=-1;
d=-1;
k=0;
cin>>n;

    for(int i=1; i<=n; i++)
    {
    cin>>x;
        if(x>p)
        {
            d=p;
            p=x;
        }

        if(d==-1)
        {
            d=x;
        }
        else
        {
            if((x>d)&&(x!=p))
                d=x;
            if(d==p)
                d=x;
        }

//cout<<"p="<<p<<" d="<<d<<endl;

    }

    cout<<d<<endl;
}
