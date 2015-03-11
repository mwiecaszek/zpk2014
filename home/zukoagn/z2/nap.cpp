#include <iostream>

using namespace std;

int main()
{
 int n, a, Zu, An;
 cin>>n;

 int Zuza[n], Antek[n];
 Zu=0;
 An=0;
 for(int i=1; i<=n; i++)
 {
     cin>>a;
     if(i%2==0)
     {
               Antek[An]=a;
               An++;
     }
     else
     {
         Zuza[Zu]=a;
         Zu++;
     }

 }

 for(int i=0; i<Zu; i++)
    cout<<Zuza[i]<<" ";

 cout<<endl;

 for(int i=0; i<An; i++)
    cout<<Antek[i]<<" ";

}
