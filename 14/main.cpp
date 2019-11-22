#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    int i = 0;
    if (strs.empty())
        return "";
    while (i != strs[0].size()) {
        for (int j = 0; j < strs.size(); j++) {
            if (i == strs[j].size())
                return strs[j];
            if (strs[0][i] != strs[j][i])
                return strs[0].substr(0, i);
        }
        i++;
    }
    return strs[0].substr(0, i);
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    vector<string> strs1 = {"a"};
    std::cout << longestCommonPrefix(strs) << std::endl;
    return 0;
}