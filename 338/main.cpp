#include <iostream>
#include <vector>

using namespace std;

int count1(int n) {
    int cnt = 0;
    while (n) {
        cnt++;
        n = n & (n - 1);
    }
    return cnt;
}

vector<int> countBits(int num) {
    vector<int> ans;
    for (int i = 0; i <= num; i++) {
        ans.push_back(count1(i));
    }
    return ans;

}

int main() {
    std::cout << count1(2) << std::endl;
    return 0;
}
