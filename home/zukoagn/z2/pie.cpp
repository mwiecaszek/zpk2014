#include <iostream>

using namespace std;

int main()
{
    long long n, x, p, k, a;

    p=-1;
    k=-1;

    cin>>n>>x;

    for(long long i=1; i<=n; i++)
    {
        cin>>a;
       if((a==x)&&(p==-1))
       {
                    p=i;
       }


       if(a==x)
        k=i;
    }

    cout<<p<<" "<<k<<endl;


}
