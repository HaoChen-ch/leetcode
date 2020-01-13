#include <iostream>

using namespace std;

int numTrees(int n) {
    long C = 1;
    for (int i = 0; i < n; ++i) {
        C = C * 2 * (2 * i + 1) / (i + 2);
    }
    return  C;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
