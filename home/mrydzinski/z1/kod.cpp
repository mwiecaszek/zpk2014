#include<iostream>
using namespace std;

int main(){

    char a, b;
    cin >> a >> b;
    int kod, x, y;
    x = (int)a - 48;
    if (b == 'A'){
        y = 10;
    }
    else
        if (b == 'B'){
            y = 11;
        }
        else
            if (b == 'C'){
                y = 12;
            }
            else
                if (b == 'D'){
                    y = 13;
                }
                else
                    if (b == 'E'){
                        y = 14;
                    }
                    else
                        if (b == 'F'){
                            y = 15;
                        } 
                        else
                            y = (int)b - 48;
    kod = 16 * x + y;
    cout << kod << endl;
    cout << (char)kod << endl;

}
