#include <iostream>
#include <string>
using namespace std;

int main() {
int n;
cin >> n;
int t[n], oceny[n];

    for(int i=0; i<6; i++)
oceny[i] = 0;

    for(int i=0; i<n; i++){

    cin >> t[i];
    if(t[i] == 1)
oceny[0]++;

if(t[i] == 2)
oceny[1]++;

if(t[i] == 3)
oceny[2]++;

if(t[i] == 4)
oceny[3]++;

if(t[i] == 5)
oceny[4]++;

if(t[i] == 6)
oceny[5]++;
}
for(int i=0; i<6; i++)
cout << oceny[i] << " ";
cout << endl;

}
