#include <iostream>
#include <vector>
using namespace std;
bool wordBreak(string s, vector<string>& wordDict) {
    for (int i = 0; i < wordDict.size(); i++) {
        int pos = s.find(wordDict[i]);
        while (pos !=-1){
            s.erase(pos,wordDict[i].size());
            pos = s.find(wordDict[i]);
        }
    }
    return s.empty();
}
int main() {
    string s = "leetcode";
    cout<<s.find("code");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
