#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    int t[n];
    for (int i=0; i<=n-1;i++)
    cin >> t[i];

    int dzien1 = -1;
    int dzien2 = -1;
    for (int i=0; i <=n-1; i++)
    if (t[i]==x && dzien1==-1)
    {
        dzien1 = i+1;
        dzien2=dzien1;
        }
    else if(t[i]==x)
    {
        dzien2 = i+1;
    }

    cout << dzien1<< " "<< dzien2;

}
