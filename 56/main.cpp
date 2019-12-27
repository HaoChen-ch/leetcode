#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool static cmp(vector<int> a, vector<int> b) {
    return a[0] < b[0];
}

vector<vector<int>> merge(vector<vector<int>> &intervals) {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end(), cmp);
    int i = 0;
    int n = intervals.size();
    while (i < n) {
        int left = intervals[i][0];
        int right = intervals[i][1];
        while (i < n - 1 && right >= intervals[i + 1][0]) {
            right = max(right, intervals[i + 1][1]);
            i++;
        }
        vector<int> tmp = {left,right};
        ans.push_back(tmp);
        i++;
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
