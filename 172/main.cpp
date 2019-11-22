#include <iostream>
using namespace std;
int trailingZeroes(int n) {
    unsigned int nCount = 0;
    while (n) {
        nCount += (n / 5);
        n /= 5;
    }
    return nCount;
}


int main() {
    bool a[3]  = {0};
    for(bool num:a)
        cout<<num<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}