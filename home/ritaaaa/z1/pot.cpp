#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int limit;
    std::cin >> limit;

    for (int i = 1; i <= limit; i <<= 1) {
        std::cout << i << std::endl;
    }
    return 0;
}
