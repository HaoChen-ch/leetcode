#include <iostream>

using namespace std;

int squareSum(int m) {
    int Sum = 0;
    while (m != 0) {
        Sum += (m % 10) * (m % 10);
        m /= 10;
    }
    return Sum;
}

bool isHappy(int n) {
    int fast = n;
    int slow = n;
    do {
        slow = squareSum(slow);
        fast = squareSum(squareSum(fast));
    } while (slow != fast);
    return fast == 1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}