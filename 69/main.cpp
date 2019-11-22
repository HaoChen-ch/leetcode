#include <iostream>

using namespace std;

int mySqrt(int x) {
    long a = x;
    while (a * a > x) {
        a = (a + x / a) / 2;
    }
    return  a;
}

int main() {
    std::cout << mySqrt(8) << std::endl;
    return 0;
}