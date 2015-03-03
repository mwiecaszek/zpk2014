#include <iostream>
 using namespace std;

int main()
{

 int a, p, i;

 i=0;
 p=0;


 do
 {
     cin>>a;
     if((a!=0)&&(a!=-1))
     {
        if(a!=p)
        {
         i++;
        }
     }
    p=a;
 }while(a!=-1);

cout<<i<<endl;
}
