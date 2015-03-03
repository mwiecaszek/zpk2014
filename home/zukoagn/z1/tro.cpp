#include <iostream>
 using namespace std;

int main()
{
 int a, b, c;
 cin>>a>>b>>c;
 int ab, ac, bc;
 ab=a+b;
 ac=a+c;
 bc=b+c;
 if ((ab>c)&&(ac>b)&&(bc>a)) cout<<"TAK"<<endl;
 else cout<<"NIE"<<endl;


}

