#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a;
}

string largestNumber(vector<int> &nums) {
    if (all_of(nums.begin(), nums.end(), [](int x) { return x == 0; })) {
        return string("0");
    }
    vector<string> num;
    for (int i : nums) {
        num.push_back(to_string(i));
    }
    sort(num.begin(), num.end(), cmp);
    string ans;
    return accumulate(num.begin(), num.end(), string());
}

int main() {
    vector<int> a = {3, 30, 34, 5, 9};
    std::cout << largestNumber(a) << std::endl;
    return 0;
}
