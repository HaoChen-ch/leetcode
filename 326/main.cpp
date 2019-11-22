#include <iostream>

using namespace std;

bool isPowerOfThree(int n) {
    if (n == 0)
        return false;
//    if (n == 1)
//        return true;

    return n==1||(n % 3 == 0 && isPowerOfThree(n / 3));
}

int main() {
    std::cout << isPowerOfThree(27) << std::endl;
    return 0;
}