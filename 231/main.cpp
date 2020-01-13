#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
