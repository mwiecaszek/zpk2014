#include <iostream>
 using namespace std;

int main()
{

 int a, b, k, i, j, liczba;

 cin>>a>>b>>k;
 if(a%k==0)
{
i=a/k;
j=b/k;
liczba=j-i+1;
}
else
{
i=a/k;
j=b/k;
liczba=j-i;
}

 cout<<liczba<<endl;

}
