#include <iostream>

using namespace std;

int strStr(string haystack, string needle) {
    bool is = true;
    int len1 = haystack.size();
    int len2 = needle.size();
    for (int i = 0; i <=len1 - len2; i++) {
        for (int j = 0; j < len2; j++) {
            if (haystack[i + j] != needle[j]) {
                is = false;
                break;
            }
            is = true;
        }
        if(is)
            return i;
    }
    return -1;
}

int main() {
    std::cout << strStr("hello","lo") << std::endl;
    return 0;
}