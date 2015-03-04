#include <iostream>
using namespace std;

int main() {
    unsigned int a,b,c;
    cin >> a >> b >> c;
    if (a+b>c)
        {
            if(a+c>b)
            {
                if(b+c>a)
                {
                    cout<< "TAK" << endl;

                }else{
                cout << "NIE" << endl;
                }

            }else{
    cout  << "NIE" << endl;
            }
        }else
        {
            cout  << "NIE" << endl;
        }
}
