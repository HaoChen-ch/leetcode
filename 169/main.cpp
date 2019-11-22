#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int majorityElement(vector<int> &nums) {
    int candi = 0;
    int cnt = 0;
    for (int i:nums) {
        candi = (cnt == 0) ? i : candi;
        cnt += (i == candi) ? 1 : -1;
    }
    return candi;
}

int majorityElement1(vector<int> &nums) {
    map<int, int> a;
    for (int i :nums) {
        a[i]++;
    }
    int tmp = 0;
    int res;
    for (int i:nums) {
        tmp = max(tmp, a[i]);
    }
    for (int i:nums) {
        if (tmp == a[i])
            res = i;
    }
    cout << res << endl;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}