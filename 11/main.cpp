#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxArea(vector<int> &height) {
    int res = 0;
    int left = 0;
    int right = height.size() - 1;
    while (left < right) {
        res = max(res, min(height[left], height[right]) * (right - left));
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    return res;
}

int main() {
    vector<int> a = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    std::cout << maxArea(a) << std::endl;
    std::cout << max_element(a.begin() + 2, a.end()) - a.begin() << std::endl;
    return 0;
}