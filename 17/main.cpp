#include <iostream>
#include <vector>

using namespace std;

vector<string> letterCombinations(string digits) {
    vector<string> str = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    ans.push_back("");
    for (int i = 0; i < digits.size(); i++) {
        for (int j = 0; j < str[digits[i]].size(); j++) {
            int cnt = ans.size();
            for (int k = 0; k < cnt; k++) {
                char tmp = str[digits[i]-'0'][j];
                string t = ans[k] + tmp;
                ans.push_back(t);
            }
        }
    }

    for(auto it = ans.begin(); it != ans.end(); it++) {
        if (it->size() != digits.size()) {
            it = ans.erase(it);
            if (it == ans.end()) break;
        }
    }
    return ans;

}

int main() {
    vector<string> res = letterCombinations("23");
    for (int i = 0; i < res.size(); i++) {
        cout<<res[i]<<endl;
    }
//    vector<string> str = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//    char t = str[2][0];
//    std::cout << t << std::endl;
    return 0;
}