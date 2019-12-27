#include <iostream>

using namespace std;

double basicPow(double x, long n) {
    if (n == 0) return 1.0;
    double half = basicPow(x, n / 2);
    double ans = n % 2 == 0 ? half * half : half * half * x;
    return ans;
}

double myPow(double x, int n) {
    long N = n;
    if (N == 0) return 1.0;
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }
    return basicPow(x, N);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
