#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits) {
    digits.insert(digits.begin(), 1, 0);
    int tmp = 1;
    int num;
    for (int i = digits.size() - 1; i >= 0; i--) {
        num = digits[i];
        digits[i] = (digits[i] + tmp) % 10;
        tmp = (num + tmp) / 10;
    }
    if (digits.size() != 1 && digits[0] == 0)
        digits.erase(digits.begin());
    return digits;
}

int main() {
    vector<int> a = {9};
    vector<int> b = plusOne(a);
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}