#include <iostream>
 using namespace std;

int main()
{

 int n;
 int a, b, pom, i;

 cin>>n;
 pom=n;
 b=0;
 i=0;
do
{
    a=pom%10;

    if(a==0)
    {
        if(i==1)
            cout<<a;

    }
    else
    {
        cout<<a;
        i=1;
    }
    pom=pom/10;
    b=a;

}while (pom!=0);


}
