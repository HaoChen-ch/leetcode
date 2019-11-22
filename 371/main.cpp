#include <iostream>
using namespace std;
int getSum(int a, int b) {
    unsigned long c = a;
    unsigned long d = b;
    while (d > 0) {
        unsigned long carry = c & d;
        c = c ^ d;
        d = carry << 1;
    }
    return (int)c;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}