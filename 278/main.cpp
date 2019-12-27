#include <iostream>

using namespace std;

bool isBadVersion(int version);

int firstBadVersion(int n) {
    int left = 1;
    int right = n;
    int mid;
    while (left < right) {
        mid = left + (right - left) / 2;
        isBadVersion(mid) ? (right = mid) : (left = mid + 1);
    }
    return left;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
