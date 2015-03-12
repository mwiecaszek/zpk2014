#include <iostream>
using namespace std;

int main() {
    int A, B, K;
    int l=0;
    cin >> A >> B >> K;
    if (A>=K && B>=K){
        if (A>=2*K && B>=2*K)
            l=(A/K*2+B/K*2)-4;
        else if (A>=2*K && B<2*K)
            l=A/K;
        else
            l=B/K;
        }
    else
        l=0;
    cout << l << endl;

}
