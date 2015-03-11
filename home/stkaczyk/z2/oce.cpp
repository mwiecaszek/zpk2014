#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n], o[n];

    for(int i=0; i<6; i++)
        o[i] = 0;

    for(int i=0; i<n; i++){
        cin >>  t[i];
        if(t[i] == 1)
            o[0]++;
        if(t[i] == 2)
            o[1]++;
        if(t[i] == 3)
            o[2]++;
        if(t[i] == 4)
            o[3]++;
        if(t[i] == 5)
            o[4]++;
        if(t[i] == 6)
            o[5]++;
    }
    for(int i=0; i<6; i++)
        cout << o[i] << " ";
    cout << endl;

}
