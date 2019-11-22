#include <iostream>
#include <algorithm>

using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    int table[26] = {0};
    for (char i : s) {
        table[i - 'a']++;
    }
    for (char i : t) {
        table[i - 'a']--;
        if (table[i - 'a'] < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1 = "aacc";
    string s2 = "ccac";
    cout << isAnagram(s1, s2);
    return 0;
}