#include <iostream>
using namespace std;

int main() {
int pomiar1, pomiar2,zwiedzajacy ;

cin >> pomiar1 >> pomiar2;
zwiedzajacy=0;

    while (pomiar1!=-1 && pomiar2!=-1)
{
    if (pomiar2!=pomiar1)
        zwiedzajacy++;
        pomiar1=pomiar2;

cin >> pomiar2;

}

cout << zwiedzajacy << endl;
}
