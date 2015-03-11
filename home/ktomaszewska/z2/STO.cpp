#include <iostream>

using namespace std;

int main() {

int a, b, k;
cin>>a>>b>>k;



if (b<=a)
{if (b<k) cout<<0;
else if (b>=k && b<2*k) cout<<a/k;
else
    cout<<(a/k*2)+(b-k*2)/k*2;
}
else
{
   if (a<k) cout<<0;
else if (a>=k && a<2*k) cout<<b/k;
else
    cout<<(b/k*2)+(a-k*2)/k*2;
}

}
