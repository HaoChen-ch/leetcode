#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char> &s) {
    int len = s.size();
    for (int i = 0; i < len / 2; i++) {
        swap(s[i], s[len - 1 - i]);
    }
}

int main() {
    vector<char> s;
    s.push_back('h');
    s.push_back('e');
    s.push_back('l');
    s.push_back('l');
    s.push_back('o');
    reverseString(s);
    for (int i = 0; i < 5; i++) {
        cout << s[i];
    }
    return 0;
}