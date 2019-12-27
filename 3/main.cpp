#include <iostream>
#include <set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int begin = 0, end = 0, cur =1;
    int ans = 1;
    while (end < s.length() && begin < s.length()&&cur<s.length()) {
        string tmp = s.substr(begin, end - begin + 1);
        if (tmp.find(s[cur]) != string::npos) {
            ans = max(ans, end - begin + 1);
            begin += tmp.find(s[cur]) + 1;
        }
        end++;
        cur++;
    }
    return ans;
}

int main() {
    std::cout << lengthOfLongestSubstring("bbbbb") << std::endl;
    string s = "abce";
    std::cout << s.find("b") << std::endl;
    return 0;
}
