#include <iostream>
using namespace std;

int main()
{ int A, B, K, n = 0;
  cin >> A >> B >> K;

    if (A && B >= K)
    {n = A / K;
            if (B >= 2 * K)
            {n += A / K;
             n += (B - 2 * K) / K;
                if (A >= 2 * K)
                n += (B - 2 * K) / K;
            }
    }

    cout << n;
}
