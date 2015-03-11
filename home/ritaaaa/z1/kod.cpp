#include <iostream>
using namespace std;

int main() {
char a;char b;
cin>>a>>b;
int w;
if (int(b) >64)
{
    w=16*(int(a)-48)+int(b)-55;
}
else
{
    w=16*(int(a)-48)+int(b)-48;
}

cout<<w<<endl<<char(w)<<endl;

}
