#include <iostream>
#include <vector>

using namespace std;

vector<int> dailyTemperatures(vector<int> &T) {
    vector<int> ans;
    for (int i = 0; i < T.size()-1; i++) {
        int cnt = 1;
        for (int j = i; j < T.size(); j++) {
            if (T[i] > T[j])
                cnt++;
            if (j == T.size() - 1 && T[i] > T[j]) {
                ans.push_back(0);
                break;
            }
            if (T[i] < T[j]) {
                ans.push_back(cnt);
                break;
            }
        }
    }
    ans.push_back(0);
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
