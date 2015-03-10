#include <iostream>
using namespace std;

int main(){
int a;
int b;
int c;

cin>>a>>b>>c;

int obj=a*b*c;
int pole=a*b*2+a*c*2+b*c*2;
cout<<obj<<"\n"<<pole;
}
