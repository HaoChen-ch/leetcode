#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> ans;
    map<string, int> map;
    for (auto & i : strs) {
        string str = i;
        sort(i.begin(), i.end());
        if (map.count(i)) {
            ans[map[i]].push_back(str);
        } else {
            ans.emplace_back(vector<string>());
            ans.back().push_back(str);
            map[i] = ans.size() - 1;
        }
    }
    return ans;
}

int main() {
    vector<string> b = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> a = groupAnagrams(b);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}