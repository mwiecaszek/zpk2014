#include<iostream>

using namespace std;

int x, y;

int main(){

    cin >> x >> y;

    if (x > 0){
        if(y>0)
            cout << "I\n";
        else if (y == 0)
            cout << "OX\n";
        else
            cout << "IV\n";

    }
    else if (x < 0){
        if(y > 0)
            cout << "II\n";
        else if (y == 0)
            cout << "OX\n";
        else
            cout << "III\n";

    }
    else{
        if(y==0)
            cout << "0\n";
        else
            cout << "OY\n";
    }

}
