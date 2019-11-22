#include <iostream>

using namespace std;

int titleToNumber(string s) {
    int ans = 0;
    for (char i : s) {
        int num = i - 'A' + 1;
        ans = ans * 26 + num;
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}