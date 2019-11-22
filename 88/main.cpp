#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int p1 = m - 1;
    int p2 = n - 1;
    int p = m + n - 1;
    while (p1 >= 0 && p2 >= 0) {
        nums1[p--] = nums1[p1] > nums2[p2] ? nums1[p1--] : nums2[p2--];
    }
    if (p1 < 0) {
        while (p2 >= 0) {
            nums1[p--] = nums2[p2--];
        }
    }
}

void merge1(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    for (int i = m; i < nums1.size(); i++) {
        nums1[i] = INT_MAX;
    }
    for (int j = 0; j < nums1.size(); j++) {
        if (nums2.empty()) {
            nums1.erase(nums1.begin() + m + n, nums1.end());
            return;
        }
        if (*nums2.begin() < nums1[j]) {
            nums1.insert(nums1.begin() + j, 1, *nums2.begin());
            nums2.erase(nums2.begin());
        }
    }
}

int main() {
    vector<int> a = {};
    vector<int> b = {1};
//    a.erase(a.begin() + 3, a.end());
    merge(a, 0, b, 1);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}