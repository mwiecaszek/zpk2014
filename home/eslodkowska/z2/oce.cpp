#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n];
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    for (int i = 0; i < n; i++)
        a[i] = 0;
    for (int i = 1; i < 7; i++)
        for (int j = 0; j < n; j++)
            if (t[j] == i) a[i - 1]++;
    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";
}
