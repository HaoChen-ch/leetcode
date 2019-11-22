#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
    vector<int> rec;
    map<int, int> map;
    for (int i : nums1)
        map[i] += 1;
    for (int i : nums2)
        if (map[i] > 0) {
            rec.push_back(i);
            map[i]--;
        }
    return rec;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}