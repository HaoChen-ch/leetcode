#include <iostream>
#include <algorithm>

using namespace std;

string preProcess(string s) {
    int n = s.length();
    if (n == 0) {
        return "^$";
    }
    string ret = "^";
    for (int i = 0; i < n; i++) {
        ret.push_back('#');
        ret.push_back(s[i]);
    }
    ret.push_back('#');
    ret.push_back('$');
    return ret;
}

string longestPalindrome(string s) {
    string pos = preProcess(s);
    int len = pos.length();
    int p[len];
    int c = 0, r = 0;
    for (int i = 1; i < len - 1; i++) {
        int i_mirror = 2 * c - i;
        p[i] = r > i ? min(r - i, p[i_mirror]) : 0;
        while (pos[i + 1 + p[i]] == pos[i - 1 - p[i]])
            p[i]++;
        if (i + p[i] > r) {
            c = i;
            r = i + p[i];
        }
    }
    int maxlen = 0;
    int cur = 0;
    for (int j = 1; j < len - 1; j++) {
        if (p[j] > maxlen) {
            maxlen = p[j];
            cur = j;
        }
    }
    int start = (cur - maxlen) / 2;
    return s.substr(start, maxlen);

}

int main() {
//    string s1 = "aaaa"+"#";
    std::cout << longestPalindrome("aaaa") << std::endl;
    return 0;
}
