#include <iostream>
#include <cstring>
using namespace std;


bool wieksza(string a, string b)
{   int k=0;
    if(a.size()> b.size()) return true;
    else{
    if(a.size()< b.size()) return false;
    else
    {
        for(int i=0;i<b.size();i++)
            {if (b[i]>a[i]) return false;
            if (b[i]==a[i]) k++;
            }

        if (k==b.size()) return false;

        return true;
    }}
}

bool mniejsza(string a, string b)
{int k=0;
    if(a.size()<b.size()) return true;
    else
    {
    if(a.size()>b.size()) return false;
    else
    {
        for(int i=0;i<a.size();i++)
            {if (a[i]>b[i]) return false;
            if (b[i]==a[i]) k++;}

        if (k==b.size()) return false;
        return true;
    }}
}



int main() {

   string a, b, znak;
    cin>>a>>znak>>b;



if (znak==">")
{
    if (wieksza(a,b)==1) cout<<"TAK";
    else cout<<"NIE";
}
else if (znak==">=")
{
    if (wieksza(a,b)==1 || (mniejsza(a,b)==0 && wieksza(a,b)==0)) cout<<"TAK";
    else cout<<"NIE";
}

else if (znak=="<")
{
    if (mniejsza(a,b)==1) cout<<"TAK";
    else cout<<"NIE";
}
else if (znak=="<=")
{
    if (mniejsza(a,b)==1 || (mniejsza(a,b)==0 && wieksza(a,b)==0)) cout<<"TAK";
    else cout<<"NIE";
}
else if (znak=="==")
{
    if (mniejsza(a,b)==0 && wieksza(a,b)==0) cout<<"TAK";
    else cout<<"NIE";
}
else if (znak=="!=")
{
    if (mniejsza(a,b)==1 || wieksza(a,b)==1) cout<<"TAK";
    else cout<<"NIE";
}
}
