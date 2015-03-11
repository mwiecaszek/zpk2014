#include <iostream>

using namespace std;

int main()
{
    int n, x;

    cin>>n;

    int ile[n];
    for (int k=0; k<=n; k++)
        ile[k]=0;


    for(int k=1; k<=n; k++)
    {
        cin>>x;
        ile[x-1]++;
    }

    for(int k=0; k<6; k++)
        cout<<ile[k]<<" ";
}
