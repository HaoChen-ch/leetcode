#include <iostream>
#include <cmath>

using namespace std;

int countPrimes(int n) {
    if (n < 1)
        return 0;
    int count = 0;
    bool signs[n];
    for (int k = 0; k < n; k++) {
        signs[k] = false;
    }

    for (long i = 2; i < n; i++) {
        if (!signs[i - 1]) {
            count++;
            for (long j = i * i; j <= n; j += i) {
                signs[j - 1] = true;
            }
        }
    }
    return count;
}

int main() {
    std::cout << countPrimes(10) << std::endl;
    return 0;
}