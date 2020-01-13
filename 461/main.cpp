#include <iostream>
#include <bitset>

using namespace std;
int hammingDistance(int x, int y) {
    return bitset<32>(x^y).count();
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
