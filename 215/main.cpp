#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int> &nums, int k) {
    priority_queue<int, vector<int>, greater<>> q;
    for (auto it:nums) {
        q.push(it);
        if (q.size() > k) q.pop();
    }
    return q.top();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}