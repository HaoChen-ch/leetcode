#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> ans;
    if (matrix.empty())
        return ans;
    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;
    while (right >= left && bottom >= top) {
        for (int i = left; i <= right; i++) ans.push_back(matrix[top][i]);//上
        for (int i = top + 1; i <= bottom; i++) ans.push_back(matrix[i][right]);//右
        if (top != bottom) for (int i = right - 1; i >= left; i--) ans.push_back(matrix[bottom][i]);//左
        if (left != right) for (int i = bottom - 1; i > top; i--) ans.push_back(matrix[i][left]);//左
        top++;
        left++;
        right--;
        bottom--;
    }
    return ans;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};
    vector<int> c = {7, 8, 9};
    vector<vector<int>> r;
    r.push_back(a);
    r.push_back(b);
    r.push_back(c);
    vector<int> ans = spiralOrder(r);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ,";
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
